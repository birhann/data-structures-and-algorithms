#include <stdio.h>
void yazdir(int *A, int boy)
{
    for (int i = 0; i < boy; i++)
        printf("%d ", A[i]);
    printf("\n");
}
void selection_sort(int *A, int boy)
{
    int i, j;
    for (i = 0; i < boy; i++)
    {
        int enk = A[i];
        int yer = i;
        for (j = i + 1; j < boy; j++)
        {
            if (enk > A[j])
            {
                enk = A[j];
                yer = j;
            }
        }
        A[yer] = A[i];
        A[i] = enk;
        yazdir(A, 10);
    }
}

int main()
{
    int dizi[10] = {9, 5, 7, 10, 2, 4, 6, 1, 3, 8};
    selection_sort(dizi, 10);
    return 0;
}