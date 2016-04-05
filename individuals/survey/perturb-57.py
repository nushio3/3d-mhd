
import subprocess

global ctr
ctr=0
def gen(xsize, zsize, cascade,opts,tb):
    global ctr
    if cascade == 0:
        xs = [xsize/2+tb]
        zs = [zsize/2+tb]
        if xsize/2 <= tb:
            return
    elif cascade == 1:
        xs = [xsize/2+tb]
        zs = [zsize/3+tb, (2*zsize)/3+tb]
        if xsize <= 2*tb:
            return
        if zsize/3 <= tb:
            return
    dirn = "p-sv57-" +str(ctr)
    ctr+=1
    subprocess.call("mkdir " + dirn, shell = True)
    fn = dirn + "/a.idv"
    with open(fn,"w") as fp:
        con = """
compiler_flags: ['-O3', '-Kfast,parallel', '-Kocl', '-Klib', '-Koptmsg=2', '-Karray_private', '-Kinstance=8', '-Kdynamic_iteration', '-Kloop_fission', '-Kloop_part_parallel', '-Kloop_part_simd', '-Keval', '-Kreduction','-Kopenmp', '-Ksimd=2']
cpp_sourcecode_url: /home/nushio/hub/formura/examples/pearson-3d-main.cpp
fmr_sourcecode_url: /home/nushio/hub/formura/examples/pearson-3d-0M.fmr
base_filename: pearson-3d.fmr
formura_version: 8a1959c23ff159e47b70b5c71cd21e4ebb609758
numerical_config:
  initial_walls:
    x: {xs}
    y: {xs}
    z: {zs}
  intra_node_shape: [{x},{x},{z}]
  monitor_interval: 64
  mpi_grid_shape: [2,2,2]
  temporal_blocking_interval: {tb}
  option_strings: {opts}
""".format(xs=xs,zs=zs, x=xsize,z=zsize,opts=opts,tb=tb)
        fp.write(con)

optss = []
optss.append(['stick-single-comp', 'omp','omp-collapse'])
optss.append(['stick-all-comp', 'omp','omp-collapse'])
# optss.append(['stick-all-comp', 'omp','omp-collapse', 'no-subroutine'])
optss.append(['stick-single-comp', 'omp','omp-collapse', 'no-subroutine'])
# optss.append(['stick-single-comp', 'no-subroutine'])
# optss.append(['stick-single-comp'])
# optss.append(['stick-all-comp'])


for opts in optss:
    for xsize in [32,48,56,62,64,66,72]:
        for zsize in [480,512,544,640]:
            if xsize >= zsize/4:
                continue
            for cascade in [0,1]:

                for tb in [8,10,12,16]:
                    err_ctr=0
                    if xsize != 64:
                        err_ctr+=1
                    if zsize != 512:
                        err_ctr+=1
                    if cascade != 0:
                        err_ctr+=1
                    if tb != 8:
                        err_ctr+=1
                    if err_ctr>=2:
                        continue
                    gen(xsize,zsize,cascade,opts,tb)
