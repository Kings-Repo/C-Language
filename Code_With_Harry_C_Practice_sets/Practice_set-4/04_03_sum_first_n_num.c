#include<stdio.h>
int main(){
    int n;
    int i=1;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);


    while (i<=n){
        sum+=i;
        i++;
    }
    printf("The sum of first %d natural numbers is %d\n",n,sum);
    return 0;
}