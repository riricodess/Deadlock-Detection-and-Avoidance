#include <stdio.h>

int main(void)
{
    int n, i, j, deadlock = 0;
    int wait_for[10][10];

    printf("Enter gaming sessions: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10) {
        printf("Invalid number of sessions.\n");
        return 1;
    }

    printf("Enter wait-for matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (scanf("%d", &wait_for[i][j]) != 1)
                return 1;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i != j && wait_for[i][j] && wait_for[j][i])
                deadlock = 1;

    printf(deadlock ? "Deadlock detected\n" : "No deadlock\n");
    return 0;
}
