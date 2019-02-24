#include <stdio.h>

typedef struct
{
    char *name;
    int age;
} person;

int main()
{
    person p;
    p.age = 25;
    p.name = "John";
    printf("age: %d, name: %s\n", p.age, p.name);
    return 0;
}
