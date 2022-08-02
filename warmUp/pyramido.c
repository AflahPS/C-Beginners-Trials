#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    char name[9] = "BROTOTYPE";
    setbuf(stdout, NULL);

    for (i = 0; i < 9; i++)
    {

        for (j = 0; j <= i; j++)
        {
            printf("%c", name[j]);
        }
        printf("\n");
    }

    return 0;
}
