#!/usr/bin/env python
import subprocess,yaml,os,random

compiler_flags0 = ['-O3', '-Kfast','-Kparallel','-Kfast,parallel', '-Kocl', '-Klib', '-Koptmsg=2', '-Karray_private', '-Kinstance=8', '-Kdynamic_iteration', '-Kloop_fission', '-Kloop_part_parallel', '-Kloop_part_simd', '-Keval', '-Kreduction','-Kopenmp', '-Ksimd=2']

global ctr
ctr=0
def gen(best_yaml,flags,xsize, zsize, cascade,opts,tb):
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
        dirn = "pt-" +str(ctr)
        if not(os.path.exists(dirn)):
            break
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
    y: {xs}
    z: {zs}
  intra_node_shape: [{x},{x},{z}]
  monitor_interval: 64
  mpi_grid_shape: [2,2,2]
  temporal_blocking_interval: {tb}
  option_strings: {opts}
""".format(flags=flags,xs=xs,zs=zs, x=xsize,z=zsize,opts=opts,tb=tb,
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


p = subprocess.Popen('./find-flops.sh', shell=True, stdout=subprocess.PIPE)
stdout_data, stderr_data = p.communicate()
canditates = stdout_data.split('\n')

choice = random.random()
best_idx=-2
if choice < 0.5:
    best_idx=-2
elif choice < 0.6:
    best_idx = int(len(canditates)*random.random())
else:
    decay = 0.001 ** random.random()
    while random.random() > decay:
        best_idx -= 1

if best_idx <= -len(canditates):
    best_idx=-2


best_dir = canditates[best_idx].split()[1].split('/')[0]
print best_dir
best_idv_file = best_dir + '/a.idv'
with open(best_idv_file, 'r') as fp:
    best_yaml = yaml.load(fp)
print best_idx, best_yaml



flags0 = best_yaml['compiler_flags']
xsize0 = best_yaml['numerical_config']['intra_node_shape'][0]
zsize0 = best_yaml['numerical_config']['intra_node_shape'][2]
tb0 = best_yaml['numerical_config']['temporal_blocking_interval']
opts0 = best_yaml['numerical_config']['option_strings']

print flags0, xsize0, zsize0, tb0, opts0
# exit(0)

flagss = [flags0]
for f in compiler_flags0:
    fs = sorted(flags0)
    if f in fs:
        fs.remove(f)
    else:
        fs.append(f)
    flagss.append(sorted(fs))

#for flags in flagss:
#    print flags
#    print sorted(flags) == sorted(flags0)
#exit(0)

for flags in flagss:
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
                    if sorted(flags) != sorted(flags0):
                        err_ctr+=1
                    if opts != opts0:
                        err_ctr+=1
                    if xsize != xsize0:
                        err_ctr+=1
                    if zsize != zsize0:
                        err_ctr+=1
                    if tb != tb0:
                        err_ctr+=1
                    if err_ctr>=3 or (err_ctr==2 and random.random() >0.05):
                        continue
                    gen(best_yaml,flags,xsize,zsize,cascade,opts,tb)
