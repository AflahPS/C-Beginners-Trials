#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i,j,num=4;

    for (i=0;i<num;i++){
        printf("''");
        for(j=0 ; j<num-1-i;j++){
        printf(" ");
        }
        for(j=0;j<2*i+1;j++){
            printf("*");
        }
        for(j=0 ; j<num-1-i;j++){
        printf(" ");
        }
        printf("''\n");
        
    }




    return 0;
}