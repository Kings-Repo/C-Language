#include<stdio.h>
void call_by_value(int n){
    n*=10;
}
int main(){
    int a=324;
    printf("Before: %d\n",a);
    call_by_value(a);
    printf("After: %d\n",a);
    

    return 0;
}