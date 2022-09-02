#include <stdio.h>

int main(void)
{
    int x = 10;
    /*int *p;
    p = &x;*/
    int *p = &x;

    printf(
        "Address of var = %p\tAddress ptr to var = %p\tAddress of ptr = %p\tp = %d\n",
        &p, p, &p, *p
        );

    int y = *p;
    printf(
        "Address of var = %p\tAddress ptr to var = %p\tAddress of ptr = %p\ty = %d\n",
        &y, p, &p, y
        );

    *p = 45;
    printf(
        "Address of var = %p\tAddress ptr to var = %p\tAddress of ptr = %p\tx = %d\n",
        &x, p, &p, x
        );


    char c = 'N';
    char *pc = &c;
    int *pd = (int *)pc;

    printf(
        "Address of var = %p\tAddress ptr to var = %p\tAddress of ptr = %p\tc = %c\n",
        &c, pc, &pc, c
        );

    printf(
        "Address of var = %p\tAddress ptr to var = %p\tAddress of ptr = %p\tc = %c\n",
        &c, pd, &pd, c
        );

    return 0;
}

