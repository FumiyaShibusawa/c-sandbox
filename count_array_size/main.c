#include <stdio.h>

int main()
{
    const size_t NUM = 100;
    int numbers[NUM];
    for (size_t i = 0; i < NUM; ++i)
        numbers[i] = i;

    int length = sizeof(numbers) / sizeof(numbers[0]);
    printf("length of 'numbers' is: %d\n", length);
}