#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, j, k, num;
	setbuf(stdout, NULL);

	printf("No.of stars at the base: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		k=i;
		for (j = 0; j < num - i; j++) {
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++) {
			if(k<2*i-1 && j<i){
			printf("%d",k);
			k++;
			}else{
			printf("%d",k);
			k--;
			}

		}
		printf("\n");

	}

	return EXIT_SUCCESS;
}
