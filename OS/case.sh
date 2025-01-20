echo "Menu:"
echo "1. List files"
echo "2. Display date"
echo "3. Display disk usage"
echo "Enter your choice:"
read choice

case $choice in
    1)
        echo "Listing files:"
        ls
        ;;
    2)
        echo "Current date and time:"
        date
        ;;
    3)
        echo "Disk usage:"
        df -h
        ;;
    *)
        echo "Invalid option!"
        ;;
esac
