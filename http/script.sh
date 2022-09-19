#!/bin/bash

tee log | tshark -i eth0 -Y http.request
cat log


#key2=$(curl -X GET reverse.blackfoot.io:5000/key/$)

#cleanKey2=${key2%:*}

#echo $cleanKey2

#curl -X GET reverse.blackfoot.io:5000/validate/$cleanKey1/$cleanKey2 > flag
