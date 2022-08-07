#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, arraySize = 600, temp;
    int array[arraySize];

    printf("please enter the size of the array: ");
    scanf("%d", &arraySize);
    printf("Enter numbers: \n");
    for (i = 0; i < arraySize; i++)
    {
        printf("number-%d : ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Before reversing\n");
    for (i = 0; i < arraySize; i++)
    {
        printf(" -%d ", array[i]);
    }
    if (arraySize % 2 == 0)
    {
        for (i = 0; i < arraySize / 2; i++)
        {
            temp = array[i];
            array[i] = array[arraySize - 1 - i];
            array[arraySize - 1 - i] = temp;
        }
    }
    else
    {
        for (i = 0; i < (arraySize + 1) / 2; i++)
        {
            temp = array[i];
            array[i] = array[arraySize - 1 - i];
            array[arraySize - 1 - i] = temp;
        }
    }
    printf("\n After reversing:\n");
    for (i = 0; i < arraySize; i++)
    {
        printf(" -%d ", array[i]);
    }

    return 0;
}