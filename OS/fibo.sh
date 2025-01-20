echo "Enter the number of terms:"
read n

a=0
b=1
i=0

echo "Fibonacci series up to $n terms:"
while [ $i -lt $n ]; do
    echo $a
    temp=$((a + b))
    a=$b
    b=$temp
    i=$((i + 1))
done
