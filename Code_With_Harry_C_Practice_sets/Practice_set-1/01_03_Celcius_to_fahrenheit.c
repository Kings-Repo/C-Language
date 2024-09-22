#include<stdio.h>
int main(){
    int celcius;
    float fahrenheit;
    printf("Enter the temperature in celcius: ");
    scanf("%d",&celcius);
    fahrenheit = (celcius * (9.0/5.0) ) + 32.0;
    printf("The Temperature in Fahrenheit is %.2f ",fahrenheit);
    return 0;
}