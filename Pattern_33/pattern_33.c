#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j, num =3;
    printf("Please enter the size of the diamond: \n");
    scanf("%d",&num);

    /* Top trapezium*/
    for(i=1; i<=num ; i++){
        for( j=1; j<=num-i; j++){
            printf(" ");
        }
        for (j=1; j<=num+i-1; j++){
            printf(" *");
        }
        printf("\n");
    }
    /* Middle square*/
    for(i=num; i<=2*num-2; i++){
        for(j=1; j<=2*num-1; j++){
            printf(" *");
        }
        printf("\n");
    }
    /*Lower trapezium*/
    for(i=2*num; i<=3*num-2;i++){
        for(j=1;j<=i-num-(num-1);j++){
            printf(" ");
        }
        for(j=1;j<=3*num-2 -i +num;j++){
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}