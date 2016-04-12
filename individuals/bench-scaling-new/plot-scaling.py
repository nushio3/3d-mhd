#!/usr/bin/env python

import re,subprocess
import decimal as dc

dc.getcontext().prec=4

def read_cmd(cmd):
    p = subprocess.Popen(cmd,shell=True,stdout=subprocess.PIPE)
    stdout_data, stderr_data = p.communicate()
    print stdout_data
    return stdout_data

fns = read_cmd('ls */out/output_prof_*.txt').split('\n')

def f(x):
    return str(dc.Decimal(x)+0)
def p(x):
    return f(x*100) + '\%'

for fn in fns:
    if fn=='': continue
    with open(fn,"r") as fp:
        con = fp.read()
        lines = con.split("\n")

        gflips = 0
        gbps = 0

        fnbody = fn.split('/')[0]
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
        print ' & '.join([fnbody,f(gbps), p(gbps/64), f(gflips), p(gflips/64), f(gflips/gbps)])
