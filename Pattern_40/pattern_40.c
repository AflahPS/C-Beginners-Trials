#include <stdio.h>
#include <stdlib.h>

int main(void){

    int num=4,i,j;

    for (i=0 ; i<num; i++){
        for ( j = 0; j < 2*i+1; j++)
        {
            if(j%2==0){
                printf("%d",i+1);
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    for (i= num-1 ; i>=0; i--){
        for ( j = 0; j < 2*i+1; j++)
        {
            if(j%2==0){
                printf("%d",i+1);
            }else{
                printf("*");
            }
        }
        printf("\n");   
    }
    return 0;
}