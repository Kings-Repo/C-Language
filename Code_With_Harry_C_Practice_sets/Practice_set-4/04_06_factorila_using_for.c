#include<stdio.h>
int main(){
    int n;
    int fac = 1;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        fac*=i;
    }
    printf("The factorial of %d is %d\n",n,fac);
    return 0;
}