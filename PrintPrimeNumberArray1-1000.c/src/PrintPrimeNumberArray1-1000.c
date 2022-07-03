

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int is_prime(int num) {
		int i, bool;
		if (num == 0 || num == 1 ) {
			bool = 0;
		} else if (num == 2 || num ==3) {
			bool = 1;
		} else if (num % 2 == 0) {
			bool = 0;
		} else {
			for (i = 3; i < num; i++) {

				if (num % i == 0) {
					bool = 0;
					break;
				} else if(num % i !=0){
					bool = 1;
				}
			}
		}
		return bool;
	}

	int arraySize=100000,array[100000],i,no_of_prime=0;
	setbuf(stdout,NULL);

	for(i=0;i<arraySize;i++){
		array[i]=i+1;
	}


	for(i=0;i<arraySize;i++){
		if (is_prime(array[i])==1){
			no_of_prime++;
		}

	}
	printf("\nThere are %d Prime Numbers in this list !!",no_of_prime);


		return EXIT_SUCCESS;
}
