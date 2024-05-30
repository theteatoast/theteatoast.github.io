#include <stdio.h>

int main() {
    int n, target;
    int found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements (sorted order):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element: ");
    scanf("%d", &target);

    int left = 0;
    int right = n - 1;
    int middle;

    while (left <= right) {
        middle = left + (right - left) / 2;

       
        if (arr[middle] == target) {
            printf("Element is present at index %d\n", middle);
            found = 1;
            break;
        }

       
        if (arr[middle] < target)
            left = middle + 1;

        
        else
            right = middle - 1;
    }

    if (!found)
        printf("Element is not present in array\n");

    return 0;
}
