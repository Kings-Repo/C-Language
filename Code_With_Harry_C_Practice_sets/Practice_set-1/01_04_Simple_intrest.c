#include<stdio.h>
int main(){
    int p,r;
    float t;
    int simple_intrest;

    printf("Enter the principle amount: ");
    scanf("%d",&p);
    printf("Enter the time period (in years): ");
    scanf("%f",&t);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%d",&r);

    simple_intrest = (p*t*r)/100;
    printf("The Simple interest is %d",simple_intrest);
    return 0;
}