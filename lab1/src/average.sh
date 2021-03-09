#!/bin/bash

count=0
sum=0

for i in $(cat $1)
do
let "count = count + 1"
let "sum = sum + i"
done

let "average = sum / count"

echo "count: $count"
echo "average: $average"



