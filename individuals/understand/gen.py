import subprocess,re

global ctr
ctr=0
def gen(opttag,xsize, ysize,zsize, cascade,opts,tb):
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
        ys = [ysize/2+tb]
        zs = [zsize/2+tb]
        if xsize <= 3*tb:
            return
    dirn = "b" +opttag + str(ctr)
    ctr+=1
    subprocess.call("mkdir " + dirn, shell = True)
    fn = dirn + "/a.idv"
    with open(fn,"w") as fp:
        con = """
compiler_flags: ['-O3', '-Kfast,parallel', '-Kocl', '-Klib', '-Koptmsg=2', '-Karray_private', '-Kinstance=8', '-Kdynamic_iteration', '-Kloop_fission', '-Kloop_part_parallel', '-Kloop_part_simd', '-Keval', '-Kreduction','-Kopenmp', '-Ksimd=2']
cpp_sourcecode_url: /home/nushio/hub/formura/examples/pearson-3d-main.cpp
fmr_sourcecode_url: /home/nushio/hub/formura/examples/pearson-3d-0M.fmr
base_filename: pearson-3d.fmr
formura_version:  83b8b54104ccf76ec40b5bce2facce06e2b4cc70
numerical_config:
  initial_walls:
    x: {xs}
    y: {ys}
    z: {zs}
  intra_node_shape: [{x},{y},{z}]
  monitor_interval: 32
  mpi_grid_shape: [4,4,4]
  temporal_blocking_interval: {tb}
  option_strings: {opts}
""".format(xs=xs,ys=ys,zs=zs, x=xsize,y=ysize,z=zsize,opts=opts,tb=tb)
        fp.write(con)

optss=[]
optss.append(['stick-single-comp', 'omp','omp-collapse', 'no-subroutine'])
optss.append(['stick-single-comp', 'omp','omp-collapse', 'no-subroutine','nbux2'])
optss.append(['stick-single-comp', 'omp','omp-collapse', 'no-subroutine','nbuy2'])
optss.append(['stick-single-comp', 'omp','omp-collapse', 'no-subroutine','nbux3'])
optss.append(['stick-single-comp', 'omp','omp-collapse', 'no-subroutine','nbuy3'])
optss.append(['stick-single-comp', 'omp','omp-collapse', 'no-subroutine','nbux4'])
optss.append(['stick-single-comp', 'omp','omp-collapse', 'no-subroutine','nbuy4'])
optss.append(['stick-single-comp', 'omp','omp-collapse', 'no-subroutine','nbux2','nbuy2'])
#optss.append(['stick-all-comp', 'omp','omp-collapse', 'no-subroutine'])
#optss.append(['stick-single-comp', 'omp','omp-collapse'])
#optss.append(['stick-all-comp', 'omp','omp-collapse'])
# optss.append(['stick-single-comp', 'no-subroutine'])
# optss.append(['stick-single-comp'])
# optss.append(['stick-all-comp'])

for opts in optss:
    opttag = ''
    for o in opts:
        if (re.match('nbu',o)):
            opttag += '-' + o
    if opttag =='':
        opttag="-pure"
    opttag += "-"

#    for sizes in [[61,53,504],[64,48,512],[64,64,768],[48,32,512]]:
    for sizes in [[64,32,1],[48,24,1],[80,40,1],[56,56,1],[48,48,1],[64,64,1]]:
        xsize,ysize,zsize=sizes
        for zsize in [256,504,720,1024]:
            for cascade in [2]:
                for tb in [6,10]:
                    gen(opttag,xsize,ysize,zsize,cascade,opts,tb)
