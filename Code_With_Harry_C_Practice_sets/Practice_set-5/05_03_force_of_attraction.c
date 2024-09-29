#include<stdio.h>
float force(int mass){
    return 9.8*mass;
}
int main(){
    float mass;

    printf("Enter mass(in Kgs): ");
    scanf("%f",&mass);

    printf("The Force of Attraction is : %.2f N",force(mass));

    return 0;
}