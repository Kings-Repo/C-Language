#include<stdio.h>
int main(){
    int x=2;
    int y=3;
    int z=3;
    int k=1;

    float exp = 3*x/y-z+k;

/*
step by step eveluation of expression:

    3*2/3-3+1;
    6/3-3+1;
    2-3+1;
    -1+1
    0
*/


    printf("%d",exp);

    return 0;
}