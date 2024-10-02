#include<stdio.h>
int main(){
    FILE *file = fopen("./Multiplication_table.txt","w");

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 1; i <= 10; i++){
        fprintf(file,"%d x %d = %d\n",n,i,n*i);
    }
    printf("Table Generated");
    fclose(file);

    return 0;
}