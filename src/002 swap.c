#include <stdio.h>
#include <stdlib.h>

void swap(int *a_ptr, int *b_ptr);

void swap(int *a_ptr, int *b_ptr) {
    int t = *a_ptr;
    *a_ptr = *b_ptr;
    *b_ptr = t;

    return;
}

int main(void) {

    int a = 21;
    int b = 17;

    swap(&a, &b);

    printf("main: a = %d, b = %d\n", a, b);

    // if () {
    //     return EXIT_FAILURE;
    // }

    return EXIT_SUCCESS;
}
