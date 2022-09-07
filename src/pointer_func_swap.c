#include <stdio.h>
#include <stdlib.h>

void swap(int *a_ptr, int *b_ptr);

void swap(int *a_ptr, int *b_ptr)
{
    int temp = *a_ptr;
    *a_ptr = *b_ptr;
    *b_ptr = temp;

    return;
}

int main(void)
{
    int x = 21;
    int y = 17;

    swap(&x, &y);

    printf("main: x = %d, y = %d\n", x, y);

    // if () {
    //     return EXIT_FAILURE;
    // }

    return EXIT_SUCCESS;
}
