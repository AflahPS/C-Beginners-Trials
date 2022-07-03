#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arraySize, array[200], i, DeleteIndexNo = INT_MAX;
	setbuf(stdout, NULL);

	printf("Please enter size of array: ");
	scanf("%d", &arraySize);

	printf("\nPlease enter numbers: ");

	for (i = 0; i < arraySize; i++) {
		printf("\n number-%d, index number-%d: ", i + 1, i);
		scanf("%d", &array[i]);
	}
	while (DeleteIndexNo >= arraySize) {
		printf("Enter index of number to be deleted");
		scanf("%d", &DeleteIndexNo);
	}
	for (i = DeleteIndexNo; i < arraySize - 1; i++) {
		array[i] = array[i + 1];
	}

	printf("\n Array after deletion: \n");
	for (i = 0; i < arraySize - 1; i++) {
		printf("\t %d", array[i]);
	}

	return EXIT_SUCCESS;
}
