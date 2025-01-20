echo "Enter the number of elements:"
read n
echo "Enter the elements of the array:"
sum=0
for ((i = 0; i < n; i++)); do
    read arr[$i]
    sum=$((sum + arr[$i]))
done

echo "The sum of the array elements is: $sum"
