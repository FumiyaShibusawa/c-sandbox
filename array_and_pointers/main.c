#include <stdio.h>

int main()
{
    const int NUM = 5;
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    char *pvowels = &vowels[0];
    size_t i;
    for (i = 0; i < NUM; i++)
    {
        printf("&vowels[%lu]: %s, pvowels + %lu: %s, vowels + %lu: %s\n",
               i, &vowels[i],
               i, pvowels + i,
               i, vowels + i);
    }

    return 0;
}
