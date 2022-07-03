#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arraySize, array[200], i, numbCount = 0;
	setbuf(stdout, NULL);

	printf("Please enter size of array: ");
	scanf("%d", &arraySize);

	printf("\nPlease enter numbers: ");

	for (i = 0; i < arraySize; i++) {
		printf("\n number-%d, index number-%d: ", i + 1, i);
		scanf("%d", &array[i]);
	}

	for (i = 0; i < arraySize; i++) {
		if (array[i] != 0) {
			array[numbCount] = array[i];
			numbCount++;
		}
	}

	for (i=numbCount;i<arraySize;i++){
		array[i]=0;
	}

	printf("\n Re-arranged array is: \n");
	for (i = 0; i < arraySize; i++) {
		printf("%d \t", array[i]);
	}

	return EXIT_SUCCESS;
}
