#include <stdio.h>
#include <stdlib.h>

unsigned long long factorial(unsigned int number)
{
    if (number > 1)
        return number * factorial(number - 1);
    else if (number == 1)
        return number;
    else
        return 1;
}

int main(int argc, char const *argv[])
{
    if (argv[1] == NULL)
    {
        printf("Error: number was not provided.\n");
        return 1;
    }
    const unsigned int NUM = atoi(argv[1]);
    unsigned long long result = factorial(NUM);
    printf("Factorial of %d is: %llu\n", NUM, result);
    return 0;
}
