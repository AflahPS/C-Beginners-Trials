
#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int num,result;

	setbuf(stdout,NULL);

	printf("Please enter a number");
	scanf("%d",&num);

	int fib(int num1){

		if (num1==0) return 0;
		else if (num1==1) return 1;


		else
		return fib(num1-1)+fib(num1-2);;
	}

	printf("%d",fib(num));

		return 0;
}
