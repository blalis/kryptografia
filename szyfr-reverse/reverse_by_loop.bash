#!/bin/bash

if [[ $1 ]] ;then
	tekst=$1
else
	echo "Nie podano tekstu"
	exit
fi

tekst_len=${#tekst}

for((i=$tekst_len;i>=0;i--))
do
	printf "${tekst:$i:1}"
done

printf "\n"
