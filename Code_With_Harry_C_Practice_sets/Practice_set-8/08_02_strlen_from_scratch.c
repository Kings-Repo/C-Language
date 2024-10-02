#include<stdio.h>
int strlen(char *str){
    int count =0;

    while(str[count] != '\0'){
        count++;
    }
    return count;
}
int main(){
    char *str = "Hello Wolrd";
    int count = strlen(str);
    printf("The string is having %d chars\n",count);
    return 0;
}