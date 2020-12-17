#include <stdio.h>
void main()
{
    int N = 9, M = 4, ia = 0, ib = 0, ic = 0, i;
    int A[] = {1, 3, 5, 7, 8, 9, 12, 17, 23};
    int B[] = {2, 6, 10, 13};
    int C[10];
    while (ia < N && ib < M)
    {
        if (A[ia] > B[ib])
        {
            C[ic] = B[ib];
            ib++;
            ic++;
        }
        else
        {
            C[ic] = A[ia];
            ia++;
            ic++;
        }
    }

    while (ib < M)
    {
        C[ic] = B[ib];
        ib++;
        ic++;
    }

    while (ia < N)
    {
        C[ic] = A[ia];
        ia++;
        ic++;
    }
    for (i = 0; i < N + M; i++)
    {
        printf("%d ", C[i]);
    }
}