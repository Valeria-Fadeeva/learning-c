#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int n = sizeof(a)/sizeof(a[0]);         // число строк
    int m = sizeof(a[0])/sizeof(a[0][0]);   // число столбцов

    int *final = a[0] + n*m - 1;    // указатель на самый последний элемент
    for (int *ptr=a[0], i=1; ptr<=final; ptr++, i++)
    {
        printf("%d \t", *ptr);
        // если остаток от целочисленного деления равен 0,
        // переходим на новую строку
        if(i % m == 0)
        {
            printf("\n");
        }
    }

    for (int *ptr=a[0], i=0; i < m * n;)
    {
        printf("%d \t", *ptr++);
        if(++i % m == 0)
        {
            printf("\n");
        }
    }

    return EXIT_SUCCESS;
}
