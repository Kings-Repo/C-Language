#include<stdio.h>
int main(){
    float income;
    float tax;
    printf("Enter Your Income to calculate Tax: ");
    scanf("%f",&income);

    if(income <= 2.5){
        tax = 0;
    }
    else if(income >2.5 && income <=5.0){
        tax = income * 0.05;
    }
    else if(income > 5.0 && income <= 10){
        tax = income * 0.2;
    }
    else{
        tax = income * 0.3;
    }
    printf("The Tax you should pay is %.3f",tax);
    return 0;
}