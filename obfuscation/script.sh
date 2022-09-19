#!/bin/bash

for i in `seq 99 999`;
do
    ./simple_binary $i > log
done

