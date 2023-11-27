#! /bin/bash

yay -Q > ./installed.txt

for file in "$1/"*
do
    sub_str="${file##*/}"
    if [ -d "$file" ] && [ -z "$(cat ./installed.txt | grep "$sub_str")" ]
    then
        echo "$sub_str"
    fi
done
