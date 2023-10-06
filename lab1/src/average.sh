#!/usr/bin/env bash

sum=0
counter=0

for arg in $*;
do
sum=$(($sum+${arg}))
counter=$(($counter+1))
done
echo "Количество: "$counter
echo "$(($sum/$counter))"

