#include<stdio.h>
int main(){
    int n;
    int fac=1;
    int i=1;
    printf("Enter a number : ");
    scanf("%d",&n);

    while(i<=n){
        fac*=i;
        i++;
    }

    printf("The factorial of %d using while loop is %d \n",n,fac);


    return 0;
}