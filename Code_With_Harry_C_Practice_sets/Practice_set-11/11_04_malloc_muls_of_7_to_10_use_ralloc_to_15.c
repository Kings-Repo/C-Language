#include<stdio.h>
#include<stdlib.h>
int main(){
    int *array;
    array = (int *)malloc(10*sizeof(int ));

    for(int i=1;i<=10;i++){
        array[i-1] = 7*i;
    }
    
    for(int i=0;i<15;i++){
        printf("%d ",array[i]);
    }
    printf("\n");

    realloc(array,15);

    for(int i=1;i<=15;i++){
        array[i-1] = 7*i;
    }

    for(int i=0;i<15;i++){
        printf("%d ",array[i]);
    }
    
    
    return 0;
}