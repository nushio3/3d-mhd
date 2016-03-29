
import subprocess

global ctr
ctr=0
def gen(xsize, zsize, cascade,opts,tb):
    global ctr
    if cascade == 0:
        xs = [xsize/2+tb]
        zs = [zsize/2+tb]
    elif cascade == 1:
        xs = [xsize/2+tb]
        zs = [zsize/3+tb, (2*zsize)/3+tb]
    dirn = "a" +str(ctr)
    ctr+=1
    subprocess.call("mkdir " + dirn, shell = True)
    fn = dirn + "/a.idv"
    with open(fn,"w") as fp:
        con = """
compiler_flags: ['-O3', '-Kfast,parallel', '-Kocl', '-Klib', '-Koptmsg=2', '-Karray_private', '-Kinstance=8', '-Kdynamic_iteration', '-Kloop_fission', '-Kloop_part_parallel', '-Kloop_part_simd', '-Keval', '-Kreduction','-Kopenmp', '-Ksimd=2']
cpp_sourcecode_url: /home/nushio/hub/formura/examples/3d-mhd-main-prof.cpp
fmr_sourcecode_url: /home/nushio/hub/formura/examples/3d-mhd.fmr
formura_version: 2f72606ab12501f67d8069d325c1304c60039d87
numerical_config:
  initial_walls:
    x: {xs}
    y: {xs}
    z: {zs}
  intra_node_shape: [{x},{x},{z}]
  monitor_interval: 40
  mpi_grid_shape: [2,2,2]
  temporal_blocking_interval: {tb}
  option_strings: {opts}
""".format(xs=xs,zs=zs, x=xsize,z=zsize,opts=opts,tb=tb)
        fp.write(con)

optss = []
optss.append(['stick-single-comp', 'omp','omp-collapse', 'no-subroutine'])
optss.append(['stick-single-comp', 'omp','omp-collapse'])
optss.append(['stick-single-comp', 'no-subroutine'])
optss.append(['stick-single-comp'])

for xsize in [64,128,256]:
    for zsize in [64,128,256]:
        if xsize > zsize:
            continue
        for cascade in [0,1]:
            for opts in optss:
                for tb in [1,2,4,8]:
                    gen(xsize,zsize,cascade,opts,tb)
