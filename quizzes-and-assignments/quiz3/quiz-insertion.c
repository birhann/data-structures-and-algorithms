#include <stdio.h>
void yazdir(int *A, int boy)
{
    for (int i = 0; i < boy; i++)
        printf("%d", A[i]);
    printf("\n");
}
void insertion_sort(int *A, int boy)
{
    int i, j;
    for (i = 1; i < boy; i++)
    {
        int ekle = A[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (ekle < A[j])
                A[j + 1] = A[j];
            else
                break;
        }
        A[j + 1] = ekle;
        yazdir(A, 10);
    }
}

int main()
{
    int arr[10] = {9, 5, 7, 10, 2, 4, 6, 1, 3, 8};
    insertion_sort(arr, 10);
    return 0;
}