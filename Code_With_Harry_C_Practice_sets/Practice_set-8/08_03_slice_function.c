#include<stdio.h>
#include<string.h>
void string_slice(char *str,int start, int end){
    if(start <0 || end > strlen(str)){
        printf("INVALID LENGTH\n");
        return ;
    }
    int len = end - start;
    int j=0;
    for(int i=start;i<end;i++){
        str[j]=str[i];
        j++;
    }
    str[len]='\0';
}
int main(){
    char str[] = "HELLO-WORLD";
    // char *str = "HELLO-WORLD"; // This wont work here;
    printf("The string before Sliceing: %s\n",str);
    string_slice(str,2,6);
    printf("The string after Sliceing: %s",str);

    return 0;
}