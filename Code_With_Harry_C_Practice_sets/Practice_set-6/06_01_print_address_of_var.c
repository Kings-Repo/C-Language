#include<stdio.h>
int main(){
    int var = 98;
    int *ptr = &var;
    printf("The address of value using variable %x\n",&var);
    printf("The address of varibale using pointer %x\n",ptr);
    printf("The value of variable using variable %d\n",var);
    printf("The value at address using pointer %d\n",*ptr);
    return 0;
}