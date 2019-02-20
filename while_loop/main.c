#include <stdio.h>

int main()
{
    const int NUM = 10;
    int array[NUM] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int i = 0;
    while (i < NUM)
    {
        if (array[i] < 5)
        {
            i++;
            continue;
        }
        if (array[i] > 10)
        {
            break;
        }
        printf("The value of array is: %d\n", array[i]);
        i++;
    }

    return 0;
}
