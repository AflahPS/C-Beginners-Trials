#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j, str_len = 5;
    char a[] = "HELLO";

    for (i = 0; i < str_len; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", a[j]);
        }
        printf("\n");
    }
    for (i = 0; i < str_len-1; i++)
    {
        for (j = str_len-1; j > i; j--)
        {
            printf("%c", a[str_len-1-j]);
        }
        printf("\n");
    }

    return 0;
}
