#include<stdio.h>
void swap(int *a,int *b){
    int temp= *a;
    *a = *b;
    *b = temp;
}
int main(){
    int array[] = {12,3,2,4,3,45,65,4,34,3,45,23};
    int length = sizeof(array)/sizeof(int) - 1;
    int temp;

    printf("Before Reversing: ");
    for(int i=0;i<=length;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    

    for(int i=0 ; i<= length/2 ; i++){
        swap(&array[i],&array[length-i]);
    }

    
    printf("After Reversing: ");
    for(int i=0;i<=length;i++){
        printf("%d ",array[i]);
    }


    return 0;
}