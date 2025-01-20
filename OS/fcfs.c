#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int bt[n], at[n], wt[n], tat[n], ct[n];

    for(i = 0; i < n; i++) {
        printf("Enter burst time and arrival time for process p%d: ", i);
        scanf("%d %d", &bt[i], &at[i]);
    }

    ct[0] = at[0] + bt[0];
    wt[0] = 0;
    tat[0] = ct[0] - at[0];

    for(i = 1; i < n; i++) {
        if(at[i] > ct[i-1]) {
            ct[i] = at[i] + bt[i];
        } else {
            ct[i] = ct[i-1] + bt[i];
        }
        wt[i] = ct[i-1] - at[i];
        tat[i] = ct[i] - at[i];
    }

    printf("\nProcess\tBurst Time\tArrival Time\tWaiting Time\tTurnaround Time\n");
    for(i = 0; i < n; i++) {
        printf("p%d\t%d\t\t%d\t\t%d\t\t%d\n", i, bt[i], at[i], wt[i], tat[i]);
    }

    return 0;
}
