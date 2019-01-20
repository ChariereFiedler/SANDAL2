#!/bin/bash

cd tests 2> /dev/null

dirs=`ls --hide=LAssert`
exeCode=0

totalPercent=0
totalNbLines=0

for d in $dirs; do
    if [ -d "$d" ]; then
	cd $d
	if [ -f "a.out" ]; then
	    out=`./a.out`
	    failed=$?
	    if [ "${failed}" == "1" ]; then
		echo "=============================================================="
		echo "Failed: $d"
		echo "    failed with code ${failed}"
		echo "    ouput log:"
		echo "${out}"
		echo "=============================================================="
		exeCode=1
	    else
		for m in ${out}; do
		    if [ "$m" == "Failed" ]; then
			failed=1
			break
		    fi
		done
		if [ "${failed}" == "1" ]; then
		    exeCode=1
		    echo "=============================================================="
		    echo "Failed: $d"
		    echo ""
		    echo "${out}"
		    echo "=============================================================="
		else
		    echo "++++++ $d success"
		    echo "${out}"
		fi
	    fi

	    coverage=`gcov ../../${d}.c -m`
	    while read -r m; do
		nbLines=""
		for l in $m; do
		    nbLines=$l
		done
		if [[ $m =~ :(.+)% ]]; then
		    percent=${BASH_REMATCH[0]:1:-1}
		    percent=`bc -l <<< ${percent}*${nbLines}`
		    totalPercent=`bc -l <<< ${totalPercent}+${percent}`
		    totalNbLines=`expr ${totalNbLines} + ${nbLines}`
		    echo "$m"
		fi
	    done <<< "$coverage"
	fi
	cd ..
    fi
done

if [[ "$totalNbLines" =~ [0-9]+ ]]; then
    totalPercent=`bc -l <<< ${totalPercent}/${totalNbLines}`
    totalPercent=`bc -l <<< ${totalPercent}*100`
    totalPercent=${totalPercent/.*}
    totalPercent=`bc -l <<< ${totalPercent}/100`
    echo "coverage: ${totalPercent}%"
fi

exit ${exeCode}
