#include<stdio.h>
int main(){
    const float PI = 3.1415926;
    int radius;
    int height;
    float area_of_circle;
    float volume_of_cylinder;
    printf("Enter Radius of the Circle: ");
    scanf("%d",&radius);
    printf("Enter Height of Cylinder: ");
    scanf("%d",&height);

    area_of_circle = PI*radius*radius;
    volume_of_cylinder  = area_of_circle*height;

    printf("The Area of Circle is %.2f\n",area_of_circle);
    printf("The Volume of Cylinder is %.2f\n",volume_of_cylinder);
    
    return 0;
}