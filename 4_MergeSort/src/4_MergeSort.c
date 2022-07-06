#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int array1Size, array1[1000], array2Size, array2[1000], i, j, k;
	int arraySize, array[2000], temp;
	setbuf(stdout, NULL);

	//Inserting to Array1
	printf("Please enter size of array1: ");
	scanf("%d", &array1Size);
	printf("\nPlease enter numbers: ");
	for (i = 0; i < array1Size; i++) {
		printf("\n number%d", i + 1);
		scanf("%d", &array1[i]);
	}

	//Sorting Array1
	for (i = 0; i < array1Size; i++) {
		for (j = i + 1; j < array1Size; j++) {
			if (array1[i] > array1[j]) {
				temp = array1[j];
				array1[j] = array1[i];
				array1[i] = temp;
			}
		}
	}

	//Printing Array1
	for (i = 0; i < array1Size; i++) {
		printf("\t %d", array1[i]);
	}

	//Inserting to Array2
	printf("\nPlease enter size of array2: ");
	scanf("%d", &array2Size);
	printf("\nPlease enter numbers: ");
	for (i = 0; i < array2Size; i++) {
		printf("\n number%d", i + 1);
		scanf("%d", &array2[i]);
	}

	//Sorting Array2
	for (i = 0; i < array2Size; i++) {
		for (j = i + 1; j < array2Size; j++) {
			if (array2[i] > array2[j]) {
				temp = array2[j];
				array2[j] = array2[i];
				array2[i] = temp;
			}
		}
	}

	//Printing array2
	for (i = 0; i < array2Size; i++) {
		printf("\t %d", array2[i]);
	}

	//MERGE
	arraySize = array1Size + array2Size;

	//If both array have no intersections & array1<array2
	if (array1[0] < array2[0] && array1[array1Size - 1] < array2[0]) {
		for (i = 0; i < arraySize; i++) {
			if (i < array1Size) {
				array[i] = array1[i];
			} else {
				array[i] = array2[i - array1Size];
			}
		}
		printf("\nFinal list is: \n");
		for (i = 0; i < arraySize; i++) {
			printf("\t %d", array[i]);
		}
	}

	//If both array have no intersections & array2<array1
	else if (array2[0] < array1[0] && array2[array2Size - 1] < array1[0]) {
		for (i = 0; i < arraySize; i++) {
			if (0 <= i && i < array1Size) {
				array[i] = array2[i];
			} else {
				array[i] = array1[i - array2Size];
			}
		}
		printf("\nFinal list is: \n");
		for (i = 0; i < arraySize; i++) {
			printf("\t %d", array[i]);
		}
	}

	//If Arrays intersect
	else {
		j = 0;
		k = 0;
		for (i = 0; i < arraySize; i++) {
			if (j < array1Size && k < array2Size) {
				if (array1[j] < array2[k]) {
					array[i] = array1[j];
					j++;
					continue;
				} else if (array2[k] < array1[j]) {
					array[i] = array2[k];
					k++;
					continue;
				} else if (array1[j] == array2[k]) {
					array[i] = array1[j];
					j++;
					continue;
				}

			} else if (j >= array1Size && k < array2Size) {
				array[i] = array2[k];
				k++;
				continue;

			} else if (j < array1Size && k >= array2Size) {
				array[i] = array1[j];
				j++;
				continue;
			}
		}

		printf("\nFinal list is: \n");
		for (i = 0; i < arraySize; i++) {
			printf("\t %d", array[i]);
		}
	}
	return EXIT_SUCCESS;
}
