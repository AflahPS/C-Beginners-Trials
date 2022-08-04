#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int num = 13456, num_length = 1, i, temp[100], digits[100], mod;

    if (num == 0)
    {
        digits[0] = 0;
    }
    else
    {
        for (i = 0; i < num_length; i++)
        {
            if (num > 0)
            {
                mod = num % 10;
                printf("%d\n", mod);
                digits[i] = mod;
                num = (num - mod) / 10;
                num_length++;
            }
        }
    }
    num_length--;
    printf("Inside temp:\n");
    for (i = 0; i < num_length; i++)
    {
        temp[i] = digits[num_length - 1 - i];
        printf("%d\n", temp[i]);
    }
    printf("Inside array\n");
    for (i = 0; i < num_length; i++)
    {
        digits[i] = temp[i];
        printf("%d\n", digits[i]);
    }
    return 0;
}