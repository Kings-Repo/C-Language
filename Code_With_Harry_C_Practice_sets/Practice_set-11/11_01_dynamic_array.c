#include<stdio.h>
#include<stdlib.h>
int main(){
    int *array;
    array = (int *)malloc(5* sizeof(int));
    array[0] = 12;
    array[1] = 22;
    array[2] = 33;
    array[3] = 44;
    array[4] = 55;
    array[5] = 66;
    array[6] = 77;
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ",array[i]);
    }
    
    return 0;
}