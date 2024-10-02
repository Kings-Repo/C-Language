#include<stdio.h>
struct vector{
    int x;
    int y;
};
void print_vector(struct vector v){
    printf("X : %d , Y : %d\n",v.x,v.y);
    printf("(x,y) => (%d,%d)\n",v.x,v.y);
}
int main(){
    struct vector v;
    v.x = 23;
    v.y = 55;
    print_vector(v);
    return 0;
}