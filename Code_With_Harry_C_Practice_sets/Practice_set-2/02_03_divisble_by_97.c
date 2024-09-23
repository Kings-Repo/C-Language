#include<stdio.h>
int main(){
    int n;
    printf("Enter a number to check if the number is divisible by 97: ");
    scanf("%d",&n);

    if(n % 97 == 0){
        printf("%d is divisible by 97\n",n);
    }
    else{
        printf("%d is  not divisible by 97\n",n);
    }
    
    return 0;
}