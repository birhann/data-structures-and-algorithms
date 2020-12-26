#include <stdio.h>
void swap(int *arrx, int *arry)
{
    int temp = *arrx;
    *arrx = *arry;
    *arry = temp;
}
void selection_sort(int arr[], int MAX)
{
    int i, j, min_idx;
    for (i = 0; i < MAX - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < MAX; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        if (min_idx != i)
        {
            printf("swapped: %d & %d\n", arr[i], arr[min_idx]);
            swap(&arr[min_idx], &arr[i]);
        }
        printf("Array: ");
        print_array(arr, MAX);
        printf("--------------------------------\n");
    }
}
void print_array(int arr[], int MAX)
{
    int i;
    for (i = 0; i < MAX; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = {4, 3, 7, 2, 12, 35};
    int MAX = sizeof(arr) / sizeof(arr[0]);
    printf("Array: ");
    print_array(arr, MAX);
    selection_sort(arr, MAX);
    printf("Sorted array: ");
    print_array(arr, MAX);
    return 0;
}