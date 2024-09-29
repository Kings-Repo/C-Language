#include<stdio.h>
int main(){
    int a= 45;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;

    printf("The value of variable: %d\n",a);
    printf("The value using pointer: %d\n",*ptr1);
    printf("The value using pointer to pointer: %d\n",**ptr2);

    return 0;
}