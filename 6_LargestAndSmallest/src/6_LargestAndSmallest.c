#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arraySize, array[250], i, largest = INT_MIN, smallest = INT_MAX;
	setbuf(stdout, NULL);

	printf("Please enter size of array: ");
	scanf("%d", &arraySize);

	printf("\nPlease enter numbers: ");

	for (i = 0; i < arraySize; i++) {
		printf("\n number%d", i + 1);
		scanf("%d", &array[i]);
	}

	for (i = 0; i < arraySize; i++) {
		if (array[i] > largest) {
			largest = array[i];
		}
		if (array[i] < smallest) {
			smallest = array[i];
		}

	}
	printf("\n largest is %d \n smallest is %d", largest, smallest);

	return EXIT_SUCCESS;
}
