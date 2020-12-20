#include <stdio.h>
void swap(int *arrx, int *arry)
{
    int temp = *arrx;
    *arrx = *arry;
    *arry = temp;
}
void buble_sort(int arr[], int MAX)
{
    int pass, mov;
    for (pass = 0; pass < MAX - 1; pass++)
    {
        for (mov = 0; mov < MAX - 1 - pass; mov++)
        {
            if (arr[mov] > arr[mov + 1])
            {
                swap(&arr[mov], &arr[mov + 1]);
            }
        }
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
    int arr[] = {14, 27, 33, 10, 35};
    int MAX = sizeof(arr) / sizeof(arr[0]);
    printf("Array: ");
    print_array(arr, MAX);
    buble_sort(arr, MAX);
    printf("Sorted array: ");
    print_array(arr, MAX);
    return 0;
}
