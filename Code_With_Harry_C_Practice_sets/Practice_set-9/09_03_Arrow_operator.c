#include<stdio.h>
typedef struct Vector{
    int x,y;
}Vector;
void print_vector(Vector v){
    printf("X: %d, Y: %d\n",v.x,v.y);
}
// Use of arrow Operator
void swap(Vector *v){
    int temp = v->x;
    v->x = v->y;
    v->y = temp;
}
int main(){
    Vector v;
    v.x = 5;
    v.y = 10;

    printf("Before Swap: ");
    print_vector(v);
    swap(&v);
    printf("After Swap: ");
    print_vector(v);

    return 0;
}