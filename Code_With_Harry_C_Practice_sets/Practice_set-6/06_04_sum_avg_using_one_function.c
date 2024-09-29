#include<stdio.h>
void sum_avg(int a,int b,int *sum,int *avg){
    *sum = a+b;
    *avg = *sum/2;
}
int main(){
    int a,b;
    int sum=0,avg=0;
    printf("Enter a: ");
    scanf("%d",&a);

    printf("Enter b: ");
    scanf("%d",&b);
    
    printf("Before The sum: %d and avg: %d\n",sum,avg);
    sum_avg(a,b,&sum,&avg);
    printf("After The sum: %d and avg: %d\n",sum,avg);
    
    return 0;   
}