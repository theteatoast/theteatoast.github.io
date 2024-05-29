#include <stdio.h>

#define MAX 100

void floydwarshall(int v, int matrix[MAX][MAX]) {
    int dist[MAX][MAX];
    int i, j, k;
    
    for (i = 0; i < v; i++) {
        for (j = 0; j < v; j++) {
            dist[i][j] = matrix[i][j];
        }
    }

    for (k = 0; k < v; k++) {
        for (i = 0; i < v; i++) {
            for (j = 0; j < v; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }


    printf("The shortest distance between every pair of vertices:\n");
    for (i = 0; i < v; i++) {
        for (j = 0; j < v; j++) {
            if (dist[i][j] == 999) {
                printf("INF ");
            } else {
                printf("%d ", dist[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int v, i, j;
    printf("Enter the number of vertices: ");
    scanf("%d", &v);

    int matrix[MAX][MAX];
    printf("Enter the adjacency matrix (use 999 for infinity):\n");
    for (i = 0; i < v; i++) {
        for (j = 0; j < v; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    floydwarshall(v, matrix);

    return 0;
}

