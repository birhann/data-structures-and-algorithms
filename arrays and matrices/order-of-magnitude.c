#include <stdio.h>
void main()
{
    int N = 5, T, elde, i, j;
    int A[] = {12, 4, 15, 7, 9};
    int Y[5];
    for (i = N - 1; i > -1; i--)
        Y[i] = 1;
    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (A[j] < A[i])
            {
                Y[j]++;
            }
            else
            {
                Y[i]++;
            }
        }
    }
    for (i = 0; i < N; i++)
        printf("%3d", A[i]);
    printf("\n");
    for (i = 0; i < N; i++)
        printf("%3d", Y[i]);
}