#!/bin/bash

if [ ${1} -lt 1 -o ${2} -lt 1 ] ; then
  echo "Invalid Parameter"  
fi

for ((i=1; i<=${1}; i++)); do
  for ((j=1; j<=${2}; j++)); do

    let k=${i}*${j}
    printf "${i}x${j}="
    printf "${k} "

  done
  echo ""
done
