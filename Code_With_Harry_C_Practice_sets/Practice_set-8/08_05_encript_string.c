#include<string.h>
#include<stdio.h>
void encrypt(char *str){
    int len = strlen(str);
    for(int i=0;i<len-1;i++){
        str[i]= str[i]+1;
    }
}
int main(){

    // char *str = "HELLO WORLD"; // The string using pointer is immutable
    char str[] = "HELLO WORLD";
    printf("Before Encryption: %s\n",str);
    encrypt(str);
    printf("After Encryption: %s\n",str);
    
    return 0;
}