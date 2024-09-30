#include<stdio.h>
int main(){
    // int input[3];
    int array[3][10];
    
    for(int i=0;i<3;i++){
        printf("Enter a number : ");
        scanf("%d",&array[i][0]);
    }

    for(int i=0;i<3;i++){
        for(int j=1;j<10;j++){
            array[i][j] = array[i][0] * (j+1);
        }
    }

    for(int i=0;i<3;i++){
        printf("The Multiples of %d are : ",array[i][0]);
        for(int j=0;j<10;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    return 0;
}