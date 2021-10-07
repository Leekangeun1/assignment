#!/bin/bash

for ((i=1; i<=${1}; i++)); do
for ((j=1; j<=${2}; j++)); do

let k=${i}*${j}
printf "${i}x${j}="
printf "${k} "

done
echo ""
done
