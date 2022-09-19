#!/bin/bash

wget reverse.blackfoot.io:8080/ELF_03
strings ELF_03 > tmp
head -n 14 tmp > tmp1
res=$(tail -n 2 tmp1)
rm tmp1 
rm tmp

ret=$(python3 elf3.py $res)

echo "$ret"
curl -X GET reverse.blackfoot.io:8080/validate/ELF_03/$ret

mv ELF_03 ELFold
