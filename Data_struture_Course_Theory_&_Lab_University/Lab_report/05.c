#include <stdio.h>

#define MAX_STOPS 10 // Adjust as needed

int main()
{
    int numStops;
    printf("Enter the number of stops: ");
    scanf("%d", &numStops);

    if (numStops > MAX_STOPS || numStops <= 0)
    {
        printf("Invalid number of stops.\n");
        return 1;
    }

    int adjMatrix[MAX_STOPS][MAX_STOPS];
    for (int i = 0; i < numStops; i++)
    {
        for (int j = 0; j < numStops; j++)
        {
            adjMatrix[i][j] = 0;
        }
    }

    for (int i = 0; i < numStops; i++)
    {
        for (int j = 0; j < numStops; j++)
        {
            if (i == j)
                continue;
            int time;
            printf("Enter travel time from stop %d to stop %d (0 if no direct connection): ", i + 1, j + 1);
            scanf("%d", &time);
            adjMatrix[i][j] = time;
        }
    }

    printf("\nDIU Transport Time Matrix (minutes):\n");
    for (int i = 0; i < numStops; i++)
    {
        for (int j = 0; j < numStops; j++)
        {
            printf("%d ", adjMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
