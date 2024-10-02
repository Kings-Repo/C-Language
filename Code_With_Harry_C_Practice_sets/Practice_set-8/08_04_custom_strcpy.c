#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *string_copy(char *str){
    char *copy = (char*)malloc((strlen(str)+1) * sizeof(char));
    char *temp = copy;
    while(*str != '\0'){
        *copy = *str;
        str++;
        copy++;
    }
    *copy = '\0';
    return temp;
}
int main(){
    char *string = "HELLO WORLD This is King";
    char *copy = NULL;

    printf("The string Before copy\n");
    printf("Original: %s | Copy: %s\n",string,copy);
    printf("The string After copy\n");

    copy = string_copy(string);
    
    printf("Original: %s | Copy: %s\n",string,copy);

    return 0;
}