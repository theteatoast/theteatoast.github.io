

echo "Enter a number:"
read num

if [ $num -le 1 ]; then
    echo "$num is not a prime number."
    exit 0
fi

is_prime=1
i=2

while [ $i -le $(expr $num / 2) ]; do
    if [ $(expr $num % $i) -eq 0 ]; then
        is_prime=0
        break
    fi
    i=$(expr $i + 1)
done

if [ $is_prime -eq 1 ]; then
    echo "$num is a prime number."
else
    echo "$num is not a prime number."
fi
