#include <stdio.h>

int compare_numbers(int a, int b)
{
    if (a < b)
    {
        printf("TRUE\n");
        return 0;
    }
    else
    {
        printf("FALSE\n");
        return 1;
    }
}

int main()
{
    compare_numbers(0, 1);
}
