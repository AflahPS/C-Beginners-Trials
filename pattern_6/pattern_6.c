int main(int argc, char const *argv[])
{
    int height,i,j,k;
    printf("Please enter height of the figure: ");
    scanf("%d",&height);

    for (i=0;i<height;i++){
        k=i;
        for (j=0;j<height-i+1;j++){
            printf(" ");
        }
        for (j=0;j<2*i+1;j++){
            if(k<=i && j<i){
                printf("%d",k);
                k--;
            }else {
                printf("%d",k);
                k++;
            }

        }
        printf("\n");
    }


    return 0;
}
