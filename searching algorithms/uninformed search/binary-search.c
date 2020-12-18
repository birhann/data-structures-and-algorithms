#include <stdio.h>
int binary_search(int arr[], int MAX, int search_key)
{
    int low = 0;
    int high = MAX - 1;
    int mid = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == search_key)
        {
            return mid;
        }
        if (arr[mid] > search_key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return 0;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int search_key = 10;
    int MAX = sizeof(arr) / sizeof(arr[0]);
    int search_key_index = binary_search(arr, MAX, search_key);
    if (search_key_index)
    {
        printf("\n\n %d found at index: %d\n\n", search_key, search_key_index);
    }
    else
    {
        printf("\n\n %d not found in int_array\n\n", search_key);
    }
    return 0;
}
