#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int ROWS = 31;
    int i, j;
    long **array = malloc(sizeof(long *) * ROWS);
    for (i = 0; i < ROWS; i++)
        array[i] = malloc(sizeof(long) * (i + 1));

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (i == 0)
            {
                array[0][0] = 1;
                printf("%ld", array[0][0]);
                break;
            }
            else if ((j - 1) < 0)
                array[i][j] = array[i - 1][j];
            else if ((i - 1) < j)
                array[i][j] = array[i - 1][j - 1];
            else
                array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
            printf("%ld ", array[i][j]);
        }
        printf("\n");
        free(array[i]);
    }
    free(array);
    return 0;
}
