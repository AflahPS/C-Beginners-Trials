#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j, num;
    printf("Please enter the size of the house: \t");
    scanf("%d",&num);
    int inp=2*num-1,size=3*inp;
    
    /* FOR ROOF:
    num inp     size    i-value
    1   1       3       2
    2   3       9       5
    3   5       15      8
    n   2*n-1   3*inp   (3*inp+1)/2 
    
    To find the i-value, find the position of 'size' in odd-number-AP.
    Using AP equation a[n]=a+(n-1)*d ie. by solving 3*inp=1+(i-1)*2}.
    */
    for (i = 1; i <= (3*inp+1)/2; i++)
    {
        for (j = 1; j <=(3*inp+1)/2-i ; j++)
        {
            printf(" ");
        }
        for (j=1; j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    /* Structure */
    for (i=1; i<=inp ; i++){
        for (j=1; j<=inp; j++){
            printf("*");
        }
        for (j=inp+1; j<=2*inp; j++){
            printf(" ");
        }
        for (j=2*inp+1; j<=3*inp; j++){
            printf("*");
        }
        printf("\n");
    }
   return 0;
}