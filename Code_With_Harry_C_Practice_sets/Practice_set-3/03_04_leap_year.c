#include<stdio.h>
int main(){
    int year;
    printf("Enter The year: ");
    scanf("%d",year);

    if((year%4 == 0 && year % 100 != 100) || year%400 ==0){
        printf("The given Year is Leap year");
    }
    else{
        printf("The given year is not leap year");
    }
    return 0;
}