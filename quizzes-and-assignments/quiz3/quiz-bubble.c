#include <stdio.h>

void yazdir(int *A, int boy)
{
    for (int i = 0; i < boy; i++)
        printf("%d", A[i]);
    printf("\n");
}

void buble_sort(int *A, int boy)
{
    int i, j;
    for (i = 0; i < boy; i++)
    {
        int kont = 0;
        for (j = 0; j < boy; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                kont = 1;
            }
        }
        if (kont == 0)
            break;
        yazdir(A, 10);
    }
}
int main()
{
    int dizi[10] = {9, 5, 7, 10, 2, 4, 6, 1, 3, 8};
    buble_sort(dizi, 10);
}
