#!/bin/bash

if [[ $1 ]] ;then
	echo $1 | rev
else
	echo "Nie podano tekstu jako argument"
fi
