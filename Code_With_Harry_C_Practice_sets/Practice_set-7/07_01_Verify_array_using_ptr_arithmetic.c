#include<stdio.h>
int main(){
    int array[10] = {1,2,3,4,43,4,35,55,43,35};

    printf("Array using indices\n");
    for (int i = 0; i < 10; i++){
        printf("%d ",array[i]);
    }
    

    printf("\nArray using pointer Arithmetic\n");
    for (int i = 0; i < 10; i++){
        printf("%d ",*(array+i));
    }
    

    return 0;
}