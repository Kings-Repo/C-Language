#include<stdio.h>
int main(){
    int marks1,marks2,marks3;
    printf("Enter Marks in Subject-1: ");
    scanf("%d",&marks1);
    printf("Enter Marks in Subject-2: ");
    scanf("%d",&marks2);
    printf("Enter Marks in Subject-3: ");
    scanf("%d",&marks3);

    if(marks1 >= 33 && marks2 >=33 && marks3 >= 33 && ((marks1+marks2+marks3)/3 >=40)){
        printf("You are Pass");
    }
    else{
        printf("You are Fail");
    }
    return 0;
}