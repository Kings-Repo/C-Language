#include<stdio.h>
int main(){
    int array[10];
    int count =0;
    for(int i=0;i<10;i++){
        printf("Enter array[%d]: ",i);
        scanf("%d",&array[i]);
    }

    //count positive numbers
    for(int i=0;i<10;i++){
        if(array[i]>=0){
            count++;
        }
    }
    printf("The array is having %d positive numbers\n",count);
    return 0;
}