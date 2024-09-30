#include<stdio.h>
int main(){
    int array[10],n,size=10;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int  i = 0; i < size; i++)
    {
        array[i] = (i+1) * n;
    }
    
    printf("The content in the array\n");
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    
    return 0;
}