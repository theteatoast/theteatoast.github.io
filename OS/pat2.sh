
lines=5

for ((i=lines; i>=1; i--)); do
    for ((j=1; j<=i; j++)); do
        echo -n "*"
    done
    echo ""  
done
