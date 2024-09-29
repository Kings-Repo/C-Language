#include<stdio.h>
int far(int cel){
    return ( cel * 9/5)+32;
}
int main(){
    int cel;
    printf("The temperature in celcius: ");
    scanf("%d",&cel);
    
    printf("The temperature in far is : %d",far(cel));
    return 0;
}