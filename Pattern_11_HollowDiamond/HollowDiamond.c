#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int num, i, j;

    printf("Please enter a number :");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - i; j++)
        {
            printf("*");
        }
        for (j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (j = 0; j < num - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 0; i < num; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        for (j = 0; j < num-i-1; j++)
        {
            printf("  ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
