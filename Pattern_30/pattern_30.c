#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = 5, i, j;
    int l=1;
    char k = 'A';
    printf("Please enter the height of hybrid pyramid: \t");
    scanf("%d",&num);

    for (i = 0; i < num; i++)
    {

        for (j = 0; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c", k);
            }
            else
            {
                printf("%d", l);
            }
        }
        if (i % 2 == 0)
        {
            k++;
        }else{
            l++;
        }

        printf("\n");
    }
    return 0;
}