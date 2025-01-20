# Command to create a new directory named example_dir
mkdir example_dir

# Command to delete a file named example.txt
rm example.txt

# Calculate factorial with function
echo "Enter a number:"
read n

factorial() {
    fact=1
    num=$1
    while [ $num -gt 1 ]; do
        fact=$((fact * num))
        num=$((num - 1))
    done
    echo "Factorial is: $fact"
}

factorial $n
