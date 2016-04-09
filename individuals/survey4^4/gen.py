import subprocess

global ctr
ctr=0
def gen(opttag,xsize, zsize, cascade,opts,tb):
    global ctr
    if cascade == 0:
        xs = [xsize/2+tb]
        ys = xs
        zs = [zsize/2+tb]
        if xsize/2 <= tb:
            return
    elif cascade == 1:
        xs = [xsize/2+tb]
        ys = xs
        zs = [zsize/3+tb, (2*zsize)/3+tb]
        if xsize <= 2*tb:
            return
        if zsize/3 <= tb:
            return
    elif cascade == 2:
        xs = [xsize/3+tb, (2*xsize)/3+tb]
        ys = [xsize/2+tb]
        zs = [zsize/2+tb]
        if xsize <= 3*tb:
            return
    dirn = "tri" +opttag + str(ctr)
    ctr+=1
    subprocess.call("mkdir " + dirn, shell = True)
    fn = dirn + "/a.idv"
    with open(fn,"w") as fp:
        con = """
compiler_flags: ['-O3', '-Kfast,parallel', '-Kocl', '-Klib', '-Koptmsg=2', '-Karray_private', '-Kinstance=8', '-Kdynamic_iteration', '-Kloop_fission', '-Kloop_part_parallel', '-Kloop_part_simd', '-Keval', '-Kreduction','-Kopenmp', '-Ksimd=2']
cpp_sourcecode_url: /home/nushio/hub/formura/examples/pearson-3d-main.cpp
fmr_sourcecode_url: /home/nushio/hub/formura/examples/pearson-3d-0M.fmr
base_filename: pearson-3d.fmr
formura_version: ac30ee5537a43a6d7f0c6363dbaa1cdd62f1c2fd
numerical_config:
  initial_walls:
    x: {xs}
    y: {ys}
    z: {zs}
  intra_node_shape: [{x},{x},{z}]
  monitor_interval: 256
  mpi_grid_shape: [4,4,4]
  temporal_blocking_interval: {tb}
  option_strings: {opts}
""".format(xs=xs,ys=ys,zs=zs, x=xsize,z=zsize,opts=opts,tb=tb)
        fp.write(con)

optss = []
optss.append(['stick-single-comp', 'omp','omp-collapse', 'no-subroutine'])
#optss.append(['stick-all-comp', 'omp','omp-collapse', 'no-subroutine'])
#optss.append(['stick-single-comp', 'omp','omp-collapse'])
#optss.append(['stick-all-comp', 'omp','omp-collapse'])
# optss.append(['stick-single-comp', 'no-subroutine'])
# optss.append(['stick-single-comp'])
# optss.append(['stick-all-comp'])

for opts in optss:
    opttag = ''
    if 'stick-single-comp' in opts:
        opttag += 'S'
    else:
        opttag += 'A'
    if 'no-subroutine' in opts:
        opttag += 'N'
    else:
        opttag += 'Y'

    for xsize in [32,64,128]:
        for zsize in [128,256,512,1024]:
            if xsize >= zsize/4:
                continue
            for cascade in [2]:
                for tb in [8,16,24]:
                    gen(opttag,xsize,zsize,cascade,opts,tb)
