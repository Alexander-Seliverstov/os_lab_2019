#!/bin/bash

count=150

for((i=1;i<151;i++)); do
    od -An -td1 -N1 < /dev/random >> numbers.txt
done