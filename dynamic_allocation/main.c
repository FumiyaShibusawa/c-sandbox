#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *os;
    char *brand;
    int released_year;
} laptop;

int main()
{
    printf("%lu\n", sizeof(laptop));
    laptop *macbook = malloc(sizeof(laptop));
    macbook->os = "macOS";
    macbook->brand = "Apple";
    macbook->released_year = 2019;
    printf("%p\n", &macbook);
    printf("my laptop's spec: os -> %s brand -> %s released_year -> %d\n",
           macbook->os,
           macbook->brand,
           macbook->released_year);
    free(macbook);

    // same value as the above even after releasing its memory
    printf("%p\n", &macbook);
    printf("my laptop's spec: os -> %s brand -> %s released_year -> %d\n",
           macbook->os,
           macbook->brand,
           macbook->released_year);
    return 0;
}
