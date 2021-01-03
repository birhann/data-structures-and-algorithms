#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int matris[N][N];

    int a, b;

    for (a = 0; a < N; a++)
    {
        for (b = 0; b < N; b++)
        {
            if ((a + b) == (N - 1))
                matris[a][b] = 1;
            else if ((a + b) < (N - 1))
                matris[a][b] = 2;
            else
                matris[a][b] = 3;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {

            printf("%d", matris[i][j]);
        }
        printf("\n");
    }
    return 0;
}