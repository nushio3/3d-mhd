#!/usr/bin/env python
import subprocess,yaml,os,random,sys

compiler_flags0 = ['-O3', '-Kfast','-Kparallel','-Kfast,parallel', '-Kocl', '-Klib', '-Koptmsg=2', '-Karray_private', '-Kinstance=8', '-Kdynamic_iteration', '-Kloop_fission', '-Kloop_part_parallel', '-Kloop_part_simd', '-Keval', '-Kreduction','-Kopenmp', '-Ksimd=2']

global ctr
ctr=0
def gen(label,best_yaml,mpi_shape,flags,xsize, zsize, cascade,opts,tb):
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
    elif cascade == 4:
        x=32
        xs=[]
        while x < xsize:
            xs.append(x)
            x+=24
        ys=xs
        z=264
        zs=[]
        while z < zsize:
            zs.append(z)
            z +=256

    dirn = ''
    dirn = label + "-" +str(ctr)
    ctr+=1

    subprocess.call("mkdir " + dirn, shell = True)
    fn = dirn + "/a.idv"
    with open(fn,"w") as fp:
        con = """
compiler_flags: {flags}
cpp_sourcecode_url: {cpp_sourcecode_url}
fmr_sourcecode_url: {fmr_sourcecode_url}
base_filename: pearson-3d.fmr
formura_version: {formura_version}
numerical_config:
  initial_walls:
    x: {xs}
    y: {ys}
    z: {zs}
  intra_node_shape: [{x},{x},{z}]
  monitor_interval: 64
  mpi_grid_shape: {mpi_shape}
  temporal_blocking_interval: {tb}
  option_strings: {opts}
""".format(flags=flags,xs=xs,ys=ys,zs=zs, x=xsize,z=zsize,opts=opts,tb=tb,
           mpi_shape=mpi_shape,
           formura_version=best_yaml['formura_version'],
           fmr_sourcecode_url=best_yaml['fmr_sourcecode_url'],
           cpp_sourcecode_url=best_yaml['cpp_sourcecode_url'])
        fp.write(con)

optss = []
optss.append(['stick-single-comp', 'omp','omp-collapse'])
optss.append(['stick-all-comp', 'omp','omp-collapse'])
optss.append(['stick-single-comp', 'omp','omp-collapse', 'no-subroutine'])
optss.append(['stick-all-comp', 'omp','omp-collapse', 'no-subroutine'])
# optss.append(['stick-single-comp', 'no-subroutine'])
# optss.append(['stick-single-comp'])
# optss.append(['stick-all-comp'])



if len(sys.argv) >=2:
    best_idv_file = sys.argv[1]
else:
    print "give me .yaml file"
    exit(0)

with open(best_idv_file, 'r') as fp:
    best_yaml = yaml.load(fp)
print best_yaml



flags0 = best_yaml['compiler_flags']
xsize0 = best_yaml['numerical_config']['intra_node_shape'][0]
zsize0 = best_yaml['numerical_config']['intra_node_shape'][2]
tb0 = best_yaml['numerical_config']['temporal_blocking_interval']
opts0 = best_yaml['numerical_config']['option_strings']

print flags0, xsize0, zsize0, tb0, opts0
# exit(0)

cascade0 = 2
if len(best_yaml['numerical_config']['initial_walls']['x'])>=2:
    cascade0 = 2
elif len(best_yaml['numerical_config']['initial_walls']['z'])>=2:
    cascade0 = 1
else:
    cascade0 = 0

ctr=0
for mpi_shape in [[32,32,16],[28,28,14],[16,16,16],[8,8,8], [4,4,4],[2,2,2]]:
     gen('weak',best_yaml,mpi_shape,flags0,xsize0,zsize0,cascade0,opts0,tb0)
ctr=0
for scale in [1,2,3,4,6,12]:
    mpi_shape= [12/scale,12/scale,12/scale]
    xsize = 24 * scale
    zsize = 256 * scale
    gen('strong',best_yaml,mpi_shape,flags0,xsize,zsize,1,opts0,tb0)
