def insertionSort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i-1

        while j >= 0 and key < arr[j]:
            arr[j+1] = arr[j]
            j -= 1
            print("1,", arr)

        arr[j+1] = key
        print("2,", arr, "\n")


arr = [12, 11, 13, 5, 6]


print("Not sorted array is:", arr)
insertionSort(arr)
print("Sorted array is:", arr)
