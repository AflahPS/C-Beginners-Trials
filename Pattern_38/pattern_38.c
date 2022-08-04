#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i,j,num=5;

    for (i=1;i<=num;i++){
        for (j=num;j>0;j--){
            if(i==j){
                printf("*");
            }else{
                printf("%d",j);
            }
        }
        printf("\n");
        
    }


    return 0;
}