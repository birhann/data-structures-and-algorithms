#include <stdio.h>
void main()
{
    int A[10];
    A[0] = 0;
    A[1] = 1;
    int i;
    for (i = 2; i < 11; i++)
    {
        A[i] = A[i - 1] + A[i - 2];
    }
    for (i = 0; i < 11; i++)
    {
        printf("%d,", A[i]);
    }
}