/*
 ============================================================================
 Name        : CountDupeElements.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arraySize = 100, sample[arraySize], i, j, duplicateCount = 0;

	for (i = 0; i < arraySize; i++) {
		if (i % 5 == 0 ) {
			sample[i] = i + 1;
		} else {
			sample[i] = i;
		}
	}
	for (i = 0; i < arraySize; i++) {
		printf("%d ,", sample[i]);
	}

	for (i = 0; i < arraySize; i++) {
		for (j = 0; j < arraySize; j++) {
			if (i != j && sample[i] == sample[j]) {

				duplicateCount ++;
			}
		}
	}
	printf("\n Total duplicate entries are: %d", duplicateCount / 2);

	return EXIT_SUCCESS;
}
