#include<stdio.h>
int main(){
    int length;
    int bredth;
    int area;
    printf("Enter the Length of Rectangle: ");
    scanf("%d",&length);
    printf("Enter the Bredth of Rectangle: ");
    scanf("%d",&bredth);
    area = length*bredth;

    printf("The Area of the Rectangle is %d\n",area);
    return 0;
}