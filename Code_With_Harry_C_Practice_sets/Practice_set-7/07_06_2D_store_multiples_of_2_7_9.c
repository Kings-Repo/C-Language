#include<stdio.h>
int main(){
    int array[3][10];

    for(int j=0;j<10;j++){
        array[0][j] = (j+1)*2;
    }
    for(int j=0;j<10;j++){
        array[1][j] = (j+1)*7;
    }
    for(int j=0;j<10;j++){
        array[2][j] = (j+1)*9;
    }

    printf("The array of 2-multiples: ");
    for(int i=0;i<10;i++){
        printf("%d ",array[0][i]);
    }
    printf("\n");
    printf("The array of 7-multiples: ");
    for(int i=0;i<10;i++){
        printf("%d ",array[1][i]);
    }
    printf("\n");
    printf("The array of 9-multiples: ");
    for(int i=0;i<10;i++){
        printf("%d ",array[2][i]);
    }
    return 0;
}