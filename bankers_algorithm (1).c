#include <stdio.h>

int main(void)
{
    int n, m, i, j, k, completed = 0, found;
    int allocation[10][10], maximum[10][10], need[10][10];
    int available[10], finished[10] = {0}, sequence[10];

    printf("Enter sessions & resources: ");
    if (scanf("%d%d", &n, &m) != 2 ||
        n < 1 || n > 10 || m < 1 || m > 10) {
        printf("Invalid dimensions.\n");
        return 1;
    }

    printf("Enter Allocation:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (scanf("%d", &allocation[i][j]) != 1) return 1;

    printf("Enter Maximum:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++) {
            if (scanf("%d", &maximum[i][j]) != 1) return 1;
            need[i][j] = maximum[i][j] - allocation[i][j];
            if (need[i][j] < 0) {
                printf("Invalid input: allocation exceeds maximum.\n");
                return 1;
            }
        }

    printf("Enter Available:\n");
    for (j = 0; j < m; j++)
        if (scanf("%d", &available[j]) != 1) return 1;

    while (completed < n) {
        found = 0;
        for (i = 0; i < n; i++) {
            if (!finished[i]) {
                for (j = 0; j < m; j++)
                    if (need[i][j] > available[j]) break;

                if (j == m) {
                    for (k = 0; k < m; k++)
                        available[k] += allocation[i][k];
                    finished[i] = 1;
                    sequence[completed++] = i;
                    found = 1;
                }
            }
        }
        if (!found) break;
    }

    if (completed < n) {
        printf("Unsafe State\n");
    } else {
        printf("Safe Sequence: ");
        for (i = 0; i < n; i++)
            printf("Session-%d%s", sequence[i], i == n - 1 ? "\n" : " ");
    }
    return 0;
}
