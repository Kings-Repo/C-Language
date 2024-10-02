#include<stdio.h>
#include<string.h>

int char_count(char *str,char ch){
    int count=-1;
    for(int i=0;i<strlen(str);i++){
        count++;
    }
    return count;
}
int main(){
    char *str = "Hello world";
    int count=char_count(str,'l');

    printf("The char \'%c\' occured %d times\n",'l',count);
    return 0;
}