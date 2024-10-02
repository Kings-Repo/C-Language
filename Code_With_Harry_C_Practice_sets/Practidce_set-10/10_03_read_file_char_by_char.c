#include<stdio.h>
int main(){
    FILE *file = fopen("./Multiplication_table.txt","r");
    FILE *temp1 = fopen("./temp1.txt","w");
    FILE *temp2 = fopen("./temp2.txt","w");
    if(file == NULL){
        printf("File not Exist\n");
        return 0;
    }else{
        printf("File Exist\n");
    }
    char ch;
    // EOF Didnt worked here
        
    while (fscanf(file,"%c",&ch) == 1){
        printf("%c",ch);
        fprintf(temp1,"%c",ch);
        fprintf(temp2,"%c",ch);
    }
    
    fclose(file);
    fclose(temp1);
    fclose(temp2);
    return 0;
}