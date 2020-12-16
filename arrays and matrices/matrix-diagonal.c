#include <stdio.h>
void main()
{
    int N = 4, i, j;
    int A[4][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};

    for (i = 0; i < N; i++)
    {
        A[i][i] = 1;
        for (j = 0; j < N; j++)
        {
            if (i != j)
            {
                A[i][j] = 3;
                A[j][i] = 2;
            }
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}