#include<stdio.h>
int main(){
    int array[10];
    int n = sizeof(array)/sizeof(int);
    for(int i=0;i<n;i++){
        array[i] = 5*(i+1);
    }

    printf("The content in The Array is \n");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}