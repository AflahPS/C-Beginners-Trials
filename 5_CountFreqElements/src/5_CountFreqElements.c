#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arraySize,commonSize=0, array[250],common[250], i, j, count;
	setbuf(stdout,NULL);


	printf("Please enter size of array: ");
	scanf("%d", &arraySize);

	printf("\nPlease enter numbers: ");

	for (i = 0; i < arraySize; i++) {
		printf("\n number%d", i+1);
		scanf("%d", &array[i]);
	}

	for (i = 0; i < arraySize; i++) {
		count = 0;
		for (j = 0; j < arraySize; j++) {
			if (array[i] == array[j]) {
				count++;
			}
		}
		if(count>1 ){
			printf("\nCount of %d in the list is %d\n", array[i], count);
		}
	}
	return EXIT_SUCCESS;
}
