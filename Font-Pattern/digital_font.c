#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int input_num = 10, num_length, size = 1, i, j;
    int digits[100],temp[100],mod;
    
    printf("Please enter size of the font: \n");
    scanf("%d", &size);

    /*Calculation for size of font*/
    int mid = size + 1, width = 2 * size + 1, height = 4 * size + 1;

    printf("Please enter a number : \n");
    scanf("%d", &input_num);

    /*Splitting number to an array*/
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
                printf("%d\n", mod);
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
    printf("Inside array\n");
    for (i = 0; i < num_length; i++)
    {
        digits[i] = temp[i];
    }

    /* clear screen */
    system("clear");

    /* number 1 */
    
    if (input_num == 1)
    {
        for (i = 1; i <= height; i++)
        {
            for (j = 1; j <= width; j++)
            {
                if (j == mid)
                {
                    printf(" %d ", input_num);
                }
                else
                {
                    printf("   ");
                }
            }
            printf("\n");
        }
    }

    /* number 2*/
    if (input_num == 2)
    {
        for (i = 1; i <= height; i++)
        {
            for (j = 1; j <= width; j++)
            {
                if (i == 1 || i == width || i == height)
                {
                    printf(" %d ", input_num);
                }
                else if (i > 1 && i < width && j == width)
                {
                    printf(" %d ", input_num);
                }
                else if (i > width && i < height && j == 1)
                {
                    printf(" %d ", input_num);
                }
                else
                {
                    printf("   ");
                }
            }
            printf("\n");
        }
    }

    /*number 3*/
    if (input_num == 3)
    {
        for (i = 1; i <= height; i++)
        {
            for (j = 1; j <= width; j++)
            {
                if (i == 1 || i == width || i == height || j == width)
                {
                    printf(" %d ", input_num);
                }
                else
                {
                    printf("   ");
                }
            }
            printf("\n");
        }
    }

    /*number 4*/
    if (input_num == 4)
    {
        for (i = 1; i <= height; i++)
        {
            for (j = 1; j <= width; j++)
            {
                if (i >= 1 && i < width && j == width-i+1|| i == width || i > width && i <= height && j == width)
                {
                    printf(" %d ", input_num);
                }
                else
                {
                    printf("   ");
                }
            }
            printf("\n");
        }
    }

    /*number 5*/
    if (input_num == 5)
    {
        for (i = 1; i <= height; i++)
        {
            for (j = 1; j <= width; j++)
            {
                if (i == 1 || i == width || i == height || i >= 1 && i < width && j == 1 || i > width && i <= height && j == width)
                {
                    printf(" %d ", input_num);
                }
                else
                {
                    printf("   ");
                }
            }
            printf("\n");
        }
    }

    /*number 6*/
    if (input_num == 6)
    {
        for (i = 1; i <= height; i++)
        {
            for (j = 1; j <= width; j++)
            {
                if (i == 1 || i == width || i == height || j == 1 || i > width && i <= height && j == width)
                {
                    printf(" %d ", input_num);
                }
                else
                {
                    printf("   ");
                }
            }
            printf("\n");
        }
    }

    /*number 7*/
    if (input_num == 7)
    {
        for (i = 1; i <= height; i++)
        {
            for (j = 1; j <= width; j++)
            {
                if (i == 1 || j == width)
                {
                    printf(" %d ", input_num);
                }
                else
                {
                    printf("   ");
                }
            }
            printf("\n");
        }
    }

    /*number 8*/
    if (input_num == 8)
    {
        for (i = 1; i <= height; i++)
        {
            for (j = 1; j <= width; j++)
            {
                if (i == 1 || i == width || i == height || j == 1 || j == width)
                {
                    printf(" %d ", input_num);
                }
                else
                {
                    printf("   ");
                }
            }
            printf("\n");
        }
    }

    /*number 9*/
    if (input_num == 9)
    {
        for (i = 1; i <= height; i++)
        {
            for (j = 1; j <= width; j++)
            {
                if (i == 1 || i == width || i == height || j == width || i >= 1 && i < width && j == 1)
                {
                    printf(" %d ", input_num);
                }
                else
                {
                    printf("   ");
                }
            }
            printf("\n");
        }
    }

    /*number 0*/
    if (input_num == 0)
    {
        for (i = 1; i <= height; i++)
        {
            for (j = 1; j <= width; j++)
            {
                if (i == 1 || i == height || j == width || j == 1)
                {
                    printf(" %d ", input_num);
                }
                else
                {
                    printf("   ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}