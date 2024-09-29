#include<stdio.h>
int main(){
    int n;
    int flag = 1;
    int i=2;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    while (i<n)
    {
        if(n%i == 0){
            flag = 0;
            break;
        }
        i++;
    }
    if(flag){
        printf("Prime using while loop\n");
    }else{
        printf("Not Prime using while loop\n");
    }

    flag = 1;
    i=2;

    do{
        if(n ==2){
            flag = 1;
            break;
        }
        else if(n % i == 0){
            flag = 0;
            break;
        }
        i++;
    }while(i<n);

    if(flag){
        printf("Prime using do-while loop\n");
    }else{
        printf("Not Prime using do-while loop\n");
    }


    return 0;
}