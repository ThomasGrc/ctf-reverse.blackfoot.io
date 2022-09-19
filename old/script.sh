#!/bin/bash

wget reverse.blackfoot.io:8080/ELF_01 
strings ELF_01 > tmp
head -n 15 tmp > tmp1
res=$(tail -n 1 tmp1)
rm tmp1 
rm tmp

curl -X GET reverse.blackfoot.io:8080/validate/ELF_01/$res

rm ELF_01
