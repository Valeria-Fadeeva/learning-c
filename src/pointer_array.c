#include <stdio.h>

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};

    const int size = sizeof(a)/sizeof(a[0]);

    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(a[0]));
    printf("%d\n", sizeof(int));

    for(int i=0;i<size;i++)
    {
        printf("a[%d]: address=%p \t value=%d \n", i, a+i, *(a+i));
    }

    return 0;
}
