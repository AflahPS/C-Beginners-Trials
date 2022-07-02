#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int isPrime = 0, i = 587, j;

	if (i == 0 || i == 1) {
		printf("%d cannot said to be a prime", i);
	} else if (i == 2) {
		printf("%d is the smallest prime number", i);
	} else if (i % 2 == 0) {
		printf("%d is an even number", i);
		;
	} else {
		for (j = 3; j < i; j++) {

			if (i % j == 0) {
				isPrime = 1;
				printf("\n %d can be divided by %d", i, j);
			}
		}
		if (isPrime == 0) {
			printf("%d is a prime number", i);
		} else {
			printf("\n So %d is NOT a prime number !!!", i);
		}

	}
	return EXIT_SUCCESS;
}
