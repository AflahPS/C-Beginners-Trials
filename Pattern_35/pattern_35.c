#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j, str_len = 8;
    char a[] = "COMPUTER";

    for (i = 0; i < str_len; i++)
    {
        for (j = 0; j <= i ; j++){
            printf("%c",a[j]);
        }
        printf("\n");
    }

    return 0;
}
