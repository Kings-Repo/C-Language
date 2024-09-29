#include<stdio.h>
int main(){
    int n;
    int i=1;
    int sum=0;

    printf("Enter a nubmer: ");
    scanf("%d",&n);

    do{
        sum+=i;
        i++;
    }while(i<=n);

    printf("The sum of %d natural numbers using do-while loop is : %d\n",n,sum);

    sum=0;

    for(i=1;i<=n;i++){
        sum+=i;
    }

    printf("The sum of %d natural numbers using for loop is : %d\n",n,sum);

    return 0;
}