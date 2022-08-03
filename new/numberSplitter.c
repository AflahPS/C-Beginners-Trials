#include <stdio.h>
#include <stdlib.h>

int main(void){

    int num=123,num_length,i,digits[100],mod;

    if(num>0 && num<10){ num_length=1;}
    else if(num>=10 && num<100){ num_length=2;}
    else if(num>=100 && num<1000){ num_length=3;}
    else if(num>=1000 && num<10000){ num_length=4;}



    for(i=0; i<num_length; i++){
        if(num>0){
            mod = num%10;
            printf("%d\n",mod);
            digits[(num_length-1)-i]=mod;
            num=(num-mod)/10;
        }
    }
    printf("Inside array\n");
    for(i=0; i<num_length; i++){
        printf("%d\n",digits[i]);
    }



    return 0;
}