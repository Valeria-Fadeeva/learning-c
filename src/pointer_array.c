#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};

    const int size = sizeof(a)/sizeof(a[0]);

    printf("sizeof(a) %d\n", sizeof(a));
    printf("sizeof(a[0]) %d\n", sizeof(a[0]));
    printf("sizeof(int) %d\n", sizeof(int));

    for (int i=0; i < size; i++)
    {
        printf("a[%d]: address=%p \t value=%d \n", i, a+i, *(a+i));
    }

    for (int *ptr = a; ptr <= &a[size - 1]; ptr++)
    {
        printf("address=%p \t value=%d \n", ptr, *ptr);
    }

    char *fruit[] = {"apricot", "apple", "banana", "lemon", "pear", "plum"};
    int n = sizeof(fruit)/sizeof(fruit[0]);

    for (int i=0; i < n; i++)
    {
        printf("%s \n", fruit[i]);
    }

    return EXIT_SUCCESS;
}
