#include<stdio.h>
typedef struct Complex{
    int x,y;
}Complex;

void print_complex_number(Complex c){
    printf("%d + i%d\n",c.x,c.y);
}

int main(){
    Complex c;
    c.x = 5;
    c.y = 2;

    print_complex_number(c);

    return 0;
}