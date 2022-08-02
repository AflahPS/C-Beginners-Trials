#include <stdio.h>
#include <stdlib.h>

int main(void){

    int num,i,j,k=1;
    
    printf ("Please enter a number :");
    scanf("%d",&num);

    for ( i = 0; i < num; i++){
        for(j=0;j<2*i+1;j++){
            if(j<=i){
                printf("%d",j+1);
                }
            else{
                printf("%d",i-(j-i)+1);
                ;
            }
        }
        printf("\n");
    }
    for ( i=num ; i>=0 ; i--){
        for(j=0;j<2*i+1;j++){
            if(j<=i){
                printf("%d",j+1);
                }
            else{
                printf("%d",i-(j-i)+1);
                ;
            }
        }
        printf("\n");
    }
    
    



    return 0;
}