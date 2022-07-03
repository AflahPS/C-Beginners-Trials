#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arraySize, array[250], i, no_odd = 0, no_even = 0, oddArray[250],
			evenArray[250];
	setbuf(stdout, NULL);

	printf("Please enter size of array: ");
	scanf("%d", &arraySize);

	printf("\nPlease enter numbers: ");

	for (i = 0; i < arraySize; i++) {
		printf("\n number%d", i + 1);
		scanf("%d", &array[i]);
	}

	for (i = 0; i < arraySize; i++) {
		if (array[i] % 2 == 0) {
			evenArray[no_even] = array[i];
			no_even++;

		} else {
			oddArray[no_odd] = array[i];
			no_odd++;

		}
	}

	printf("\nList of odd numbers is: ");
	for (i = 0; i < no_odd; i++) {
		printf("\n %d", oddArray[i]);

	}
	printf("\nList of even numbers is: ");
	for (i = 0; i < no_even; i++) {
		printf("\n %d", evenArray[i]);

	}

	return EXIT_SUCCESS;
}
