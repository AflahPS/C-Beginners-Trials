#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arraySize, array[200], i, j, temp;
	setbuf(stdout, NULL);

	printf("Please enter size of array: ");
	scanf("%d", &arraySize);

	printf("\nPlease enter numbers: ");

	for (i = 0; i < arraySize; i++) {
		printf("\n number-%d, index number-%d: ", i + 1, i);
		scanf("%d", &array[i]);
	}

	for (i = 0; i < arraySize; i++) {
		for (j = i + 1; j < arraySize; j++) {
			if (i != j && array[i] > array[j]) {
				temp = array[j];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	printf("\n second largest number is: %d\n"
			" second smallest number is: %d",array[arraySize-2],array[1]);

	return EXIT_SUCCESS;
}
