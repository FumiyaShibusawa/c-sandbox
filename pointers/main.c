#include <stdio.h>

int main()
{
    int n = 1;
    int *pointer_to_n = &n;
    *pointer_to_n += 1;
    printf("%d\n", *pointer_to_n);
    printf("%d\n", n);
    return 0;
}
