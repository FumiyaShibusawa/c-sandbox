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
        // $ ./main
        // &vowels[0]: aeiou, pvowels + 0: aeiou, vowels + 0: aeiou
        // &vowels[1]: eiou, pvowels + 1: eiou, vowels + 1: eiou
        // &vowels[2]: iou, pvowels + 2: iou, vowels + 2: iou
        // &vowels[3]: ou, pvowels + 3: ou, vowels + 3: ou
        // &vowels[4]: u, pvowels + 4: u, vowels + 4: u
    }

    return 0;
}
