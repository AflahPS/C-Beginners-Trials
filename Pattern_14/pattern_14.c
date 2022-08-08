#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int num, i, j, k = 1;

    printf("Please enter a number :");
    scanf("%d", &num);

    for (i = 0; i <= num; i++)
    {
        k = 1;
        for (j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i)
            {
                printf("*");
            }
            else
            {
                if (j <= i)
                {
                    printf("%d", j);
                }
                else
                {
                    printf("%d", i - k);
                    k++;
                }
            }
        }
        printf("\n");
    }
    for(i=num; i>0;i--){
        k = 2;
        for (j = 0; j < 2 * i - 1; j++)
        {
            if (j == 0 || j == 2 * i-2)
            {
                printf("*");
            }
            else
            {
                if (j <= i-1)
                {
                    printf("%d", j);
                }
                else
                {
                    printf("%d", i - k);
                    k++;
                }
            }
        }
        printf("\n");
    }
    return 0;
}