#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int input_num, num_length = 1, size = 1, i, j, k;
    int digits[100], temp[100], mod;

    printf("Please enter size of the font: \n");
    scanf("%d", &size);

    /*Calculation for size of font*/
    int mid = size + 1, width = 2 * size + 1, height = 4 * size + 1;

    printf("Please enter a number (maximum 9 number): \n");
    scanf("%d", &input_num);

    /*Splitting number to digits and inserting to an array*/

    if (input_num == 0)
    {
        digits[0] = 0;
    }
    else
    {
        for (i = 0; i < num_length; i++)
        {
            if (input_num > 0)
            {
                mod = input_num % 10;
                digits[i] = mod;
                input_num = (input_num - mod) / 10;
                num_length++;
            }
        }
    }
    num_length--;

    for (i = 0; i < num_length; i++)
    {
        temp[i] = digits[num_length - 1 - i];
    }

    for (i = 0; i < num_length; i++)
    {
        digits[i] = temp[i];
    }

    /* clear screen */
    system("clear");

    /*Printing each elements of array*/

    for (i = 1; i <= height; i++)
    {
        for (k = 0; k < num_length; k++)
        {

            for (j = 1; j <= width; j++)
            {

                if (digits[k] == 1)
                {
                    if (j == mid)
                    {
                        printf(" * ");
                    }
                    else
                    {
                        printf("   ");
                    }
                }
                else if (digits[k] == 2)
                {
                    if (i == 1 || i == width || i == height || i > 1 && i < width && j == width || i > width && i < height && j == 1)
                    {
                        printf(" * ");
                    }
                    else
                    {
                        printf("   ");
                    }
                }
                else if (digits[k] == 3)
                {
                    if (i == 1 || i == width || i == height || j == width)
                    {
                        printf(" * ");
                    }
                    else
                    {
                        printf("   ");
                    }
                }
                else if (digits[k] == 4)
                {
                    if (i >= 1 && i < width && j == width - i + 1 || i == width || i > width && i <= height && j == width)
                    {
                        printf(" * ");
                    }
                    else
                    {
                        printf("   ");
                    }
                }
                else if (digits[k] == 5)
                {
                    if (i == 1 || i == width || i == height || i >= 1 && i < width && j == 1 || i > width && i <= height && j == width)
                    {
                        printf(" * ");
                    }
                    else
                    {
                        printf("   ");
                    }
                }
                else if (digits[k] == 6)
                {
                    if (i == 1 || i == width || i == height || j == 1 || i > width && i <= height && j == width)
                    {
                        printf(" * ");
                    }
                    else
                    {
                        printf("   ");
                    }
                }
                else if (digits[k] == 7)
                {
                    if (i == 1 || j == width)
                    {
                        printf(" * ");
                    }
                    else
                    {
                        printf("   ");
                    }
                }
                else if (digits[k] == 8)
                {
                    if (i == 1 || i == width || i == height || j == 1 || j == width)
                    {
                        printf(" * ");
                    }
                    else
                    {
                        printf("   ");
                    }
                }
                else if (digits[k] == 9)
                {
                    if (i == 1 || i == width || i == height || j == width || i >= 1 && i < width && j == 1)
                    {
                        printf(" * ");
                    }
                    else
                    {
                        printf("   ");
                    }
                }
                else if (digits[k] == 0)
                {
                    if (i == 1 || i == height || j == width || j == 1)
                    {
                        printf(" * ");
                    }
                    else
                    {
                        printf("   ");
                    }
                }
            }printf("  ");
        }
        printf("\n");
    }

    return 0;
}