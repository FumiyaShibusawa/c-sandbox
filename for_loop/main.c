#include <stdio.h>

int main()
{
    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length1 = sizeof(array1) / sizeof(int);
    int sum = 0;
    for (int i = 0; i < length1; i++)
    {
        sum += array1[i];
    }
    printf("The sum of the 'array1' is: %d\n", sum);

    int array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length2 = sizeof(array2) / sizeof(int);
    int factorial = 1;
    for (int i = 0; i < length2; i++)
    {
        factorial *= array2[i];
    }
    printf("The factorial of the 'array2' is: %d\n", factorial);

    return 0;
}
