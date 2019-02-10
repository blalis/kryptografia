#!/bin/bash

if [[ $1 ]] ;then
	tekst=$1
else
	echo "Nie podano tekstu"
	exit
fi

cezar=3

for i in {a..z}
do
	tab+=($i)
done

<<com
for i in ${tab[*]}
do
	echo -n $i
done
com
letnum=${#tab[*]}

printf "\n"
echo "Tekst: $1"
printf "\n"
echo -n "Szyfr: "

for((i=0;i<${#tekst};i++))
do
	letter=${tekst:$i:1}
	if [[ `echo $letter | grep [a-zA-Z] | wc -l` -eq 1 ]] ;then
		if [[ `echo $letter | grep [A-Z] | wc -l` -eq 1 ]] ;then
			casetest=1
		else
			casetest=0
		fi
		letter=$(echo $letter | tr [A-Z] [a-z])
		for((k=0;k<$letnum;k++))
		do
			if [[ ${tab[$k]} = $letter ]] ;then
				tabnum=$k
				break
			fi
		done
		if [[ $tabnum -gt `echo "$letnum-$cezar-1" | bc` ]] ;then
			tabnum=$(echo "$tabnum-$letnum+$cezar" | bc)
		else
			tabnum=$((tabnum+cezar))
		fi

		letter=${tab[$tabnum]}
		if [[ $casetest -eq 1 ]] ;then
			letter=$(echo $letter | tr [a-z] [A-Z])
		fi
		printf "$letter"
	else
		printf "$letter"
	fi	
done

printf "\n\n"
