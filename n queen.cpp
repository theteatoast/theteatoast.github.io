#include <stdio.h>
#include <math.h>

int x[30], count = 0;

int place(int k, int i) {
    int j;
    for (j = 1; j < k; j++) {
        if ((x[j] == i) || (abs(j - k) == abs(x[j] - i)))
            return 0;
    }
    return 1;
}

void display(int n) {
    int i, j;
    count++;
    printf("\n\nSolution #%d:\n", count);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (x[i] == j)
                printf("Q\t");
            else
                printf("*\t");
        }
        printf("\n");
    }
}

void nqueen(int k, int n) {
    int i;
    for (i = 1; i <= n; i++) {
        if (place(k, i)) {
            x[k] = i;
            if (k == n)
                display(n);
            else
                nqueen(k + 1, n);
        }
    }
}

int main() {
    int i, n;
    printf("Enter the number of Queens\n");
    scanf("%d", &n);
    nqueen(1, n);
}

