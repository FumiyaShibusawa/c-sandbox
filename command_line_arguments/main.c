#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[])
{
    printf("渡された引数の数は %d 個だよ\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}
