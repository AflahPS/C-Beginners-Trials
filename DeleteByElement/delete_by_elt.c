#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, arraySize = 1000, count = 0, delNum;
    int array[arraySize];

    printf("please enter the size of the array: \n");
    scanf("%d", &arraySize);
    printf("Enter numbers: \n");
    for (i = 0; i < arraySize; i++)
    {
        printf("number-%d : ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Please enter the number you want to delete: ");
    scanf("%d", &delNum);
    for (i = 0; i < arraySize; i++)
    {
        if (array[i] == delNum)
        {
            count++;
            for (j = i; j < arraySize; j++)
            {
                if (j + 1 == arraySize)
                {
                    continue;
                }
                else
                {
                    array[j] = array[j + 1];
                }
            }
        }
    }
    arraySize = arraySize - count;
    printf("Array after deletion of %d is: \n", delNum);
    for (i = 0; i < arraySize; i++)
    {
        printf("%d \n", array[i]);
    }

    return 0;
}