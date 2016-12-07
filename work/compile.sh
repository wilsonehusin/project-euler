#!/bin/bash
if [ $# -ne 3 ]; then
	echo "Usage: $0 compiler filename"
	echo "Example: $0 gcc file.c"
	echo "         $0 g++ file.cpp"
	exit
fi
$1 -Wall -Werror -g -o compiled $2