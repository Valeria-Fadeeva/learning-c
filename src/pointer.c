#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p;
    p = &x;
    printf("Address = %p\tPtr address = %p\n", p, &p);
    printf("x = %d\n", *p);

    int y = *p;
    printf("Address = %p\tPtr address = %p\n", &y, &p);
    printf("y = %d\n", y); // 10

    *p = 45;
    printf("Address = %p\tPtr address = %p\n", p, &p);
    printf("x = %d\n", x); // 45

    char c = 'N';
    char *pc = &c;
    int *pd = (int *)pc;
    printf("pc = %p\n", pc);
    printf("pd = %p\n", pd);

    return 0;
}

