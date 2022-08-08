#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j, num = 3;
    
    printf("Please enter a number (0-26): \n");
    scanf("%d",&num);

    char let[num], c = 'A';

    for (i = 0; i < num; i++)
    {
        let[i] = c;
        c++;
    }

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < 2 * num; j++)
        {
            if (j < num - i)
            {
                printf("%c", let[j]);
            }
            else if (j >= num-1 + i)
            {
                printf("%c", let[2 * (num - 1) - j]);
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}