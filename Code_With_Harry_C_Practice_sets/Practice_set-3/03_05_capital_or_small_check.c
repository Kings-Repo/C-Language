#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch >= 'a' && ch<='z'){
        printf("The given Character is Lower Case");
    }else if(ch>='A' && ch<='Z'){
        printf("The given Character is Upper Case");
    }else{
        printf("Invalid Character");
    }
    return 0;
}