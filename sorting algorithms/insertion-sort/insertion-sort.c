#include <stdio.h>

void insertion_sort(int arr[], int MAX)
{
    int i, inst_val, position;
    for (i = 1; i < MAX; i++)
    {
        inst_val = arr[i];
        position = i;
        while (position > 0 && arr[position - 1] > inst_val)
        {
            printf("%d ? %d\n", arr[position - 1], inst_val);
            arr[position] = arr[position - 1];
            position--;
        }
        if (position != i)
        {
            arr[position] = inst_val;
            printf("swapped: %d & %d\n", arr[position + 1], arr[position]);
            printf("Array: ");
            print_array(arr, MAX);
            printf("--------------------------------\n");
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
    int arr[] = {5, 1, 4, 2, 8};
    int MAX = sizeof(arr) / sizeof(arr[0]);
    printf("Array: ");
    print_array(arr, MAX);
    insertion_sort(arr, MAX);
    printf("Sorted array: ");
    print_array(arr, MAX);
    return 0;
}