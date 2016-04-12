#!/usr/bin/env python

import re, sys,subprocess

for fn in sys.argv[1:]:
    with open(fn,"r") as fp:
        con = fp.read()
        lines = con.split("\n")
        for i in range(len(lines)):
            if re.search("MFLOPS\/PEAK",lines[i]):
                if re.search("main 0",lines[i+2]):
                    print lines[i+2].split()[3], fn
                    break
