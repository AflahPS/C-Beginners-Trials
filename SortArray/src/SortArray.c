

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arraySize = 100, array[arraySize], i, j, temp;
	setbuf(stdout, NULL);

	printf("Please enter size of array: ");
	scanf("%d", &arraySize);

	printf("\nPlease enter numbers: ");

	for (i = 0; i < arraySize; i++) {
		printf("\n number%d", i);
		scanf("%d", &array[i]);
	}

	for (i = 0; i < arraySize; i++) {
		for (j = i + 1; j < arraySize; j++) {
			if (array[i] < array[j]) {
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;

			}

		}

	}

	for (i = 0; i < arraySize; i++) {
		printf("\t %d", array[i]);
	}

	return EXIT_SUCCESS;
}
