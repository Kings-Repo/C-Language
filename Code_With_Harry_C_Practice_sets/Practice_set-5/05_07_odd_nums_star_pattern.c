#include<stdio.h>
void stars(int n){
    for(int i=1 ; i <= (2*n - 1); i++){
        printf("* ");
    }
    printf("\n");
}
int main(){ 
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        stars(i);
    }

    return 0;
}