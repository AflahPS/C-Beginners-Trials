#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j, num = 5;

    for (i = 0; i < num; i++)
    {
        for (j = num; j >=i ; j--){
            printf("  ");
        }
        for (j = 0; j <= i ; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
