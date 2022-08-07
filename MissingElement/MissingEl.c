#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,j,arraySize=600;
    int array[arraySize];
    setbuf(stdout,NULL);
    

    printf("please enter the size of the array: ");
    scanf("%d",&arraySize);
    printf("Enter numbers: \n");
    for(i=0;i<arraySize;i++){
        printf("number-%d : ",i+1);
        scanf("%d",&array[i]);
    }

    printf("Entered array is :");
    for(i=0;i<arraySize;i++){
        printf("\n  %d",array[i]);
    }




    return 0;
}