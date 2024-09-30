#include<stdio.h>
int main(){
    int arrray[3][10];
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<10 ; j++){
            // int temp = (int)&arrray[i][j];
            printf("[%d] ",(int)&arrray[i][j]%100);
            // printf("Address of array[%d]: %d \n",i,&arrray[i][j]);
        }
        printf("\n");
    }

    return 0;
}