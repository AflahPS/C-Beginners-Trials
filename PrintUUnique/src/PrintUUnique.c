#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int count, arraySize = 10, array[arraySize], i, j;

	for (i = 0; i < arraySize; i++) {
		if (i % 3 == 0) {
			array[i] = i + 1;
		} else {
			array[i] = i;
		}
	}
	for (i = 0; i < arraySize; i++) {
		printf(" %d, ", array[i]);
	}
	for (i = 0; i < arraySize; i++) {
		count = 0;
		for (j = 0; j < arraySize; j++) {

			if (i != j && array[i] == array[j]) {
				count++;
			}
		}
		if (count == 0) {
			printf("\n unique are %d", array[i]);
		}
	}
	return 0;
}
