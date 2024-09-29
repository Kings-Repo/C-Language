#include<stdio.h>
int n_sum(int n){
    if(n == 1){
        return 1;
    }
    return n + n_sum(n-1);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The Sum of %d nums is %d",n,n_sum(n));
    return 0;
}