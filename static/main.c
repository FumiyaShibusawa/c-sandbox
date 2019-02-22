#include <stdio.h>

int add_number(int num)
{
    static int total;
    total += num;
    return total;
}

int main()
{
    printf("%d\n", add_number(55));
    printf("%d\n", add_number(55));
    printf("%d\n", add_number(55));
    return 0;
}
