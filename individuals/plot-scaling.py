#!/usr/bin/env python

import re,subprocess,yaml
import decimal as dc

dc.getcontext().prec=4

def read_cmd(cmd):
    p = subprocess.Popen(cmd,shell=True,stdout=subprocess.PIPE)
    stdout_data, stderr_data = p.communicate()
    return stdout_data

fns = read_cmd(' '.join(
    ['ls bench-scaling-new/*/out/output_prof_*.txt'
     ,'survey4^4/sv25/out/output_prof_*.txt'
     ,'survey4^4/zen4/out/output_prof_*.txt'
     ,'survey4^4/ptd-444/out/output_prof_*.txt'
     ,'understand/pt-115/out/output_prof_*.txt'
    ])).split('\n')

# fns = read_cmd(' '.join(
#     ['ls survey4^4/*/out/output_prof_*.txt'
#     ])).split('\n')


def f(x):
    return str(dc.Decimal(x)+0)
def p(x):
    return f(x*100) + '\%'

data = {}

for fn in fns:
    if fn=='': continue
    with open(fn,"r") as fp:
        con = fp.read()
        lines = con.split("\n")

        gflips = 0
        gbps = 0

        key = fn.split('/')[1]

        idvfn = '/'.join(fn.split('/')[0:-2] + ['a.idv'])
        try:
            with open(idvfn, 'r') as fp:
                idv = yaml.load(fp)
        except:
            continue

        for i in range(len(lines)):
            if re.search("MFLOPS\/PEAK",lines[i]):
                if re.search("main 0",lines[i+2]):
                    gflips=float(lines[i+2].split()[2])*21.0/29.0/1e3
                    break
        for i in range(len(lines)):
            if re.search("PEAK",lines[i]):
                if re.search("main 0",lines[i+2]) and re.search("Mem throughput",lines[i-1]) :
                    gbps=float(lines[i+2].split()[2])
                    break
        if gbps==0: continue
        val = [gflips, gbps, idv]
        if key in data:
            gf_other=data[key][0]
            if gflips > gf_other:
                data[key] = val
        else:
            data[key] = val

for key,val in sorted(data.iteritems()) :
    gflips, gbps, idv = val
    mpidata = idv['numerical_config']['mpi_grid_shape']
    indata = idv['numerical_config']['intra_node_shape']
    mpigrid = '${}$'.format('\\times'.join([str(n) for n in mpidata]))
    ingrid = '${}$'.format('\\times'.join([str(n) for n in indata]))

    totaldata=[1,1,1]
    for i in [0,1,2]:
        totaldata[i] = mpidata[i]*indata[i]
    totalgrid = '${}$'.format('\\times'.join([str(n) for n in totaldata]))


    print gflips/gbps, ' & '.join([key,mpigrid,ingrid,totalgrid,f(gbps), p(gbps/64), f(gflips), p(gflips/64), f(gflips/gbps)]) + '\\\\'
