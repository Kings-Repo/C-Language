#include<stdio.h>
#include<string.h>
void char_in_str(char *str, char ch){
    for(int i=0;i<strlen(str);i++){
        if(str[i] == ch){
            printf("%c is present\n",ch);
            return ;
        }
    }
    printf("%c is not present\n",ch);
}
int main(){
    char *str = "HELLO WORLD";
    
    char_in_str(str,'z');

    return 0;
}