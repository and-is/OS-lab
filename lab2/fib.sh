echo "Enter the number of term you require"
read n
n1=0
n2=1
for (( i=0; i<$n; i++ )) 
do
	if [ $i -eq 0 ]
	then
		n3=$n1
	elif [ $i -eq 1 ]
	then
		n3=$n2
	else
		n3=$((n1+n2))
		n1=$n2
		n2=$n3
	fi
	echo $n3
done
