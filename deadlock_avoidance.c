#include <stdio.h>

int main(void)
{
    int n, m, i, j, allocation[10][10], need[10][10], available[10];
    int safe = 1;

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

    printf("Enter Need:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (scanf("%d", &need[i][j]) != 1) return 1;

    printf("Enter Available:\n");
    for (j = 0; j < m; j++)
        if (scanf("%d", &available[j]) != 1) return 1;

    /* Implements the simple Need-versus-Available check in the manual. */
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (need[i][j] > available[j]) safe = 0;

    printf(safe ? "Safe allocation\n" : "Request delayed\n");
    return 0;
}
