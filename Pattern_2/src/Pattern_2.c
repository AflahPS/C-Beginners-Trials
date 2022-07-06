#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, j, num;
	setbuf(stdout, NULL);

	printf("No.of stars at the base: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		for (j = 0; j < i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	for (i = 1; i <= num; i++) {
			for (j = 0; j <num- i; j++) {
				printf("* ");
			}
			printf("\n");
		}

	return EXIT_SUCCESS;
}
