#!/bin/bash
echo "${H}:${M}:${S}"
while [[ 1 ]]; do
	H=`date +%H`
	M=`date +%M`
	S=`date +%S`
	notify-send "${H}:${M}:${S}"
	sleep 5
done
