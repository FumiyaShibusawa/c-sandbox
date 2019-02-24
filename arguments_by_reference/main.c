#include <stdio.h>

typedef struct
{
    char *name;
    int age;
} person;

void getsOldByOne(person *p)
{
    printf("getsOldByOne %p\n", p);
    (*p).age++;
};

int main()
{
    person p = {"John", 27};
    printf("main %p\n", &p);
    printf("%s was %d years old.\n", p.name, p.age);
    getsOldByOne(&p);
    printf("%s is now %d years old.\n", p.name, p.age);
    return 0;
}

// void addone(int *n)
// {
//     (*n)++;
// }

// typedef struct
// {
//     int x;
//     int y;
// } point;

// void move(point *p)
// {
//     // p.x++;
//     // p.y++;
//     p->x++;
//     p->y++;
//     printf("p.x: %d, p.y: %d\n", (*p).x, (*p).y);
// }

// int main()
// {
//     point p = {1, 1};
//     move(&p);
//     printf("p.x: %d, p.y: %d\n", p.x, p.y);
//     return 0;
// }
