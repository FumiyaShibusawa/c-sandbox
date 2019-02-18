#include <stdio.h>
#include <string.h>

int main()
{
    char *name = "John Smith";
    printf("The value of *name is: %s\n", name);
    printf("strlen(name) is: %lu\n", strlen(name));
    if (strncmp(name, "Johnathan", 9) == 0)
    {
        printf("strncmp returns 0, Hello, John!\n");
    }
    else
    {
        printf("strncmp did not return 0, You are not John. Go away.\n");
    }

    char dest[12] = "Hello";
    char src[] = "World";
    printf("With strncat, Hello and World is concatenated: %s\n", strncat(dest, src, 6));
    printf("After strncat, the value of dest char is changed: %s\n", dest);

    char *first_name = "John";
    char last_name[] = " Doe";
    char full_name[9];
    full_name[0] = '\0';               // NOTE: 最初（であり最後）の文字に NULL 文字を代入しておく。
    strncat(full_name, first_name, 4); // strncat の仕様上、 src[0] は dest の NULL 文字 を置換する。
    strncat(full_name, last_name, 4);
    printf("%s\n", full_name);
    return 0;
}
