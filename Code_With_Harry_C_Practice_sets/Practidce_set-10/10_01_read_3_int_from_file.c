#include<stdio.h>
int main(){
    FILE *file = fopen("./temp.txt","r");

    int a,b,c;
    fscanf(file,"%d %d %d",&a,&b,&c);

    fclose(file);
    printf("Read Integers are: %d %d %d",a,b,c);

    return 0;
}