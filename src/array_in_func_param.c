#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void twice(size_t length, int numbers[]);

void twice(size_t length, int numbers[])
{
    for (int i = 0; i < length; i++)
    {
        numbers[i] *= 2;
    }
}

void twice_ptr(size_t length, int *numbers);

void twice_ptr(size_t length, int *numbers)
{
    for (int i = 0; i < length; i++)
    {
        *numbers++ *= 2;
    }
}

void copy(const int *src, int *dst, size_t length);

void copy(const int *src, int *dst, size_t length)
{
    for (int i = 0; i < length; i++)
    {
        printf("src %p = %d\n", src, *src);
        printf("dst %p = %d\n", dst, *dst);

        *dst++ = *src++;

        printf("\n");
    }

    printf("\n");
}


int main(void)
{
    int numbers[] = {1, 2, 3, 4, 5};
    size_t length = sizeof(numbers) / sizeof(numbers[0]);

    int numbers2[5] = {};

    copy(numbers, numbers2, length);

    twice(length, numbers);
    twice_ptr(length, numbers2);

    for (int i = 0; i < length; i++)
    {
        printf("numbers[%d] %p = %d\n", i, &numbers[i], numbers[i]);
    }

    printf("\n");

    for (int i = 0; i < length; i++)
    {
        printf("numbers2[%d] %p = %d\n", i, &numbers2[i], numbers2[i]);
    }

    printf("\n");
    printf("\n");

    return EXIT_SUCCESS;
}
