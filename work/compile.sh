#!/bin/bash
if [ $# -ne 2 ]; then
	echo "Usage: $0 compiler filename"
	echo "Example: $0 gcc file.c"
	echo "         $0 g++ file.cpp"
	exit
fi
rm -f compiled
$1 -Wall -Werror -g -o compiled $2
rm -rf compiled.dSYM
