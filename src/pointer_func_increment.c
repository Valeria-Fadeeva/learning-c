#include <stdio.h>
#include <stdlib.h>

void increment(int *counter);

void increment(int *counter)
{
    (*counter)++;

    printf("increment function: %d\n", *counter);
}

int main(void)
{
    int n = 0;
    for (int i = 0; i < 5; i++) {
        increment(&n);
    }

    printf("main function: %d\n", n);

    return EXIT_SUCCESS;
}


