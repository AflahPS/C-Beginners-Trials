#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j, num = 4;

    for (i = 1; i <= num; i++)
    {
        for (j = 0; j < num; j++)
        {
            if (i + j > num)
            {
                printf("*");
            }
            else
            {
                printf("%d", j + 1);
            }
        }
        for (j = num-1; j >= 0 ; j--)
        {
            if (i + j > num)
            {
                printf("*");
            }
            else
            {
                printf("%d", j + 1);
            }
        }
        printf("\n");
    }
    return 0;
}