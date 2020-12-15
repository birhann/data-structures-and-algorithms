#include <stdio.h>
void main()
{
    int N, max, min;
    N = 11;
    int A[] = {1, 12, 43, 41, 32, 14, 8, 32, 67, 2, 4};
    min = A[0];
    max = A[0];
    int i;
    for (i = 0; i < N; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
        else if (A[i] < min)
        {
            min = A[i];
        }
    }
    printf("%d %d", min, max);
}