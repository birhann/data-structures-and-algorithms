#include <stdio.h>
int main()
{

    char matrix[3][4] = {
        {'A', 'B', 'C', 'D'},
        {'A', 'B', 'C', 'D'},
        {'A', 'B', 'C', 'D'},
    };

    int total = sizeof(matrix);
    int columns = sizeof(matrix[0]);
    int rows = total / columns;

    printf("Total : %d\n", total);
    printf("Rows: %d\n", rows);
    printf("Columns: %d\n", columns);
}