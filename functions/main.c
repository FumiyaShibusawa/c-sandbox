#include <stdio.h>

void print_big(int arg)
{
    if (arg > 10)
    {
        printf("arg is big: %d\n", arg);
    }
    else
    {
        printf("arg is not big: %d\n", arg);
    }
}

int main()
{
    print_big(11);
    print_big(10);
    return 0;
}
