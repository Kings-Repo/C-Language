#include<stdio.h>
typedef struct Vector
{
    int x,y;
}Vector;
Vector sum_vector(Vector v1, Vector v2){
    Vector v;
    v.x = v1.x + v2.x;
    v.y = v1.y + v2.y;
    return v;
}
void print_vector(Vector v){
    printf("(x,y) => (%d,%d)\n",v.x,v.y);
}
int main(){
    Vector v1,v2,v;
    v1.x = 5;
    v1.y = 12;

    v2.x = 34;
    v2.y = 23;

    v = sum_vector(v1,v2);

    print_vector(v1);
    print_vector(v2);
    printf("sum: ");
    print_vector(v);
    return 0;
}