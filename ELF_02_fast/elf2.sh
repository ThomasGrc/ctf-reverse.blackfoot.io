#!/bin/bash

wget reverse.blackfoot.io:8080/ELF_02
strings ELF_02 > tmp
head -n 18 tmp > tmp1
res=$(tail -n 1 tmp1)
rm tmp1 
rm tmp

ret=$(python3 elf2.py $res)

echo "$ret"
curl -X GET reverse.blackfoot.io:8080/validate/ELF_02/$ret

mv ELF_02 ELFold
