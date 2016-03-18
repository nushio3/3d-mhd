
import subprocess

global ctr
ctr=0
def gen(xsize, zsize, cascade,opts):
    global ctr
    if cascade == 0:
        xs = [xsize/2]
        zs = [zsize/2]
    elif cascade == 1:
        xs = [(xsize+20)/2]
        zs = [(zsize+20)/2]
    elif cascade == 2:
        xs = [xsize/2]
        zs = [zsize/3, (2*zsize)/3]
    dirn = "a" +str(ctr)
    ctr+=1
    subprocess.call("mkdir " + dirn, shell = True)
    fn = dirn + "/a.idv"
    with open(fn,"w") as fp:
        con = """
compiler_flags: ['-O3', '-Kfast,parallel', '-Kocl', '-Klib', '-Koptmsg=2', '-Karray_private', '-Kinstance=8', '-Kdynamic_iteration', '-Kloop_fission', '-Kloop_part_parallel', '-Kloop_part_simd', '-Keval', '-Kreduction','-Kopenmp', '-Ksimd=2']
cpp_sourcecode_url: /home/nushio/hub/formura/examples/3d-mhd-main-prof.cpp
fmr_sourcecode_url: /home/nushio/hub/formura/examples/3d-mhd.fmr
formura_version: d8289eb64a0766bab28c6944d7a2a9df9fb056a6
numerical_config:
  initial_walls:
    x: {xs}
    y: {xs}
    z: {zs}
  intra_node_shape: [{x},{x},{z}]
  monitor_interval: 20
  mpi_grid_shape: [2,2,2]
  temporal_blocking_interval: 1
  option_strings: {opts}
""".format(xs=xs,zs=zs, x=xsize,z=zsize,opts=opts)
        fp.write(con)

optss = []
optss.append(['stick-all-comp', 'omp','omp-collapse'])
optss.append(['stick-single-comp', 'omp','omp-collapse'])
optss.append(['stick-all-comp'])
optss.append(['stick-single-comp'])

for xsize in [64,128,256]:
    for zsize in [64,128,256]:
        if xsize > zsize:
            continue
        for cascade in [0,1,2]:
            for opts in optss:
                gen(xsize,zsize,cascade,opts)
