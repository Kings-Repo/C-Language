#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter first Number: ");
    scanf("%d",&a);
    printf("Enter second Number: ");
    scanf("%d",&b);
    printf("Enter third Number: ");
    scanf("%d",&c);
    printf("Enter fourth Number: ");
    scanf("%d",&d);

    int r1,r2;

    if(a>b){
        r1 = a;
    }else{
        r1 =b;
    }
    if(c>d){
        r2=c;
    }else{
        r2=d;
    }
    if(r1>r2){
        printf("%d is greatest\n",r1);
    }else{
        printf("%d is greatest\n",r2);
    }
    return 0;
}