#!/usr/bin/env python
import subprocess,yaml,os

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
    dirn = ''
    while True:
        dirn = "TEST-q" +str(ctr)
        if not(os.path.exists(dirn)):
            break
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
optss.append(['stick-single-comp', 'omp','omp-collapse', 'no-subroutine'])
optss.append(['stick-all-comp', 'omp','omp-collapse', 'no-subroutine'])
# optss.append(['stick-single-comp', 'no-subroutine'])
# optss.append(['stick-single-comp'])
# optss.append(['stick-all-comp'])


p = subprocess.Popen('./find-flops.sh', shell=True, stdout=subprocess.PIPE)
stdout_data, stderr_data = p.communicate()
best_dir = stdout_data.split('\n')[-2].split()[1].split('/')[0]
best_idv_file = best_dir + '/a.idv'
with open(best_idv_file, 'r') as fp:
    best_yaml = yaml.load(fp)
print best_yaml

xsize0 = best_yaml['numerical_config']['intra_node_shape'][0]
zsize0 = best_yaml['numerical_config']['intra_node_shape'][2]
tb0 = best_yaml['numerical_config']['temporal_blocking_interval']
opts0 = best_yaml['numerical_config']['option_strings']

print xsize0, zsize0, tb0, opts0
# exit(0)

for opts in optss:
    for xsize in [xsize0/2,xsize0-8,xsize0-2,xsize0-1,xsize0,xsize0+1,xsize0+2,xsize0+8,xsize0*2]:
        for zsize in [zsize0/2,zsize0-8,zsize0-2,zsize0-1,zsize0,zsize0+1,zsize0+2,zsize0+8,zsize0*2]:
            if xsize >= zsize/4 or xsize<=0 or zsize<=0:
                continue
            for cascade in [0]:

                for tb in [tb0/2,tb0-1,tb0,tb0+1,tb0*2]:
                    if tb <=0:
                        continue

                    err_ctr=0
                    if opts != opts0:
                        err_ctr+=1
                    if xsize != xsize0:
                        err_ctr+=1
                    if zsize != zsize0:
                        err_ctr+=1
                    if tb != tb0:
                        err_ctr+=1
                    if err_ctr>=2:
                        continue
                    gen(xsize,zsize,cascade,opts,tb)
