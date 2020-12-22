def bubble_sort(array):
    has_swapped = True

    num_of_iterations = 0

    while(has_swapped):
        has_swapped = False
        for i in range(len(array) - num_of_iterations - 1):
            if array[i] > array[i+1]:
                # Swap
                array[i], array[i+1] = array[i+1], array[i]
                has_swapped = True
        num_of_iterations += 1

    return array


print(bubble_sort([12, 43, 23, 7, 94, 34, 8, 53, 19]))
