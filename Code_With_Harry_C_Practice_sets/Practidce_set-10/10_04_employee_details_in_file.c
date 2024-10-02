#include<stdio.h>
typedef struct Employee{
    int id;
    char name[20];
    float salary;
}Employee;
int main(){
    FILE *file = fopen("Employee.txt","a");

    Employee e;
    strcpy(e.name,"unknown");
    e.id=2;
    e.salary= 91.25;
    fprintf(file,"ID: %d\tNAME: %s\tSALARY: %.2f\n",e.id,e.name,e.salary);

    return 0;
}