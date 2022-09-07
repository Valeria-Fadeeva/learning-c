#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = puts("Hello, world!");
    int b = puts("Привет, мир!");

    if (a == EOF || b == EOF)
    {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
