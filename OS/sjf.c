#include <stdio.h>

void calculateSJF(int n, int bt[], int at[], int wt[], int tat[]) {
    int ct[n], completed[n], totalCompleted = 0, currentTime = 0;
    for (int i = 0; i < n; i++) {
        completed[i] = 0;
    }
    while (totalCompleted < n) {
        int idx = -1;
        int minBurstTime = 9999;
        for (int i = 0; i < n; i++) {
            if (at[i] <= currentTime && !completed[i] && bt[i] < minBurstTime) {
                minBurstTime = bt[i];
                idx = i;
            }
        }
        if (idx == -1) {
            currentTime++;
        } else {
            ct[idx] = currentTime + bt[idx];
            wt[idx] = ct[idx] - at[idx] - bt[idx];
            tat[idx] = ct[idx] - at[idx];
            completed[idx] = 1;
            totalCompleted++;
            currentTime = ct[idx];
        }
    }
}

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    int bt[n], at[n], wt[n], tat[n];
    for (int i = 0; i < n; i++) {
        printf("Enter burst time and arrival time for process p%d: ", i);
        scanf("%d %d", &bt[i], &at[i]);
    }
    calculateSJF(n, bt, at, wt, tat);
    printf("\nProcess\tBurst Time\tArrival Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        printf("p%d\t%d\t\t%d\t\t%d\t\t%d\n", i, bt[i], at[i], wt[i], tat[i]);
    }
    return 0;
}
