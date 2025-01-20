
lines=4

for ((i=1; i<=lines; i++)); do
    for ((j=1; j<=i; j++)); do
        echo -n "*"
    done
    echo "" 
done
