#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int a = printf("%s\n", "Hello, world!");
    int b = printf("%s\n", "Привет, мир!");

    if (a < 0 || b < 0) {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
