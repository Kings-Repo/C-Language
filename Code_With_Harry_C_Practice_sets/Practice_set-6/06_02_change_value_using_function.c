#include<stdio.h>
void change(int n){
    n=23;
}
int main(){
    int n=32;
    printf("Before Change: %d\n",n);
    change(n);
    printf("After Change: %d\n",n);
    
    return 0;
}