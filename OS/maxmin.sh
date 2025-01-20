

echo "Enter the number of elements in the array:"
read n

echo "Enter the elements:"
for ((i=0; i<n; i++)); do
    read arr[i]
done

max=${arr[0]}
min=${arr[0]}

for ((i=1; i<n; i++)); do
    if [ ${arr[i]} -gt $max ]; then
        max=${arr[i]}
    fi
    if [ ${arr[i]} -lt $min ]; then
        min=${arr[i]}
    fi
done

echo "Maximum element is $max"
echo "Minimum element is $min"
