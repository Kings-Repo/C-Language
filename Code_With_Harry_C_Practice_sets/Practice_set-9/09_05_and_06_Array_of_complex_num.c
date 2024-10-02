#include<stdio.h>
typedef struct Complex
{
    int x,y;
}Complex;
void take_input_complex(Complex c[],int size){

    for(int i=0;i<size;i++){
        printf("Enter complex-%d\n",i+1);

        printf("x: ");
        scanf("%d",&c[i].x);
        printf("y: ");
        scanf("%d",&c[i].y);
    }
}
void print_complex(Complex c){
    printf("%d + %di\n",c.x,c.y);
}
int main(){
    Complex c[5];
    
    take_input_complex(c,5);

    print_complex(c[0]);
    print_complex(c[2]);
    print_complex(c[3]);
    print_complex(c[4]);
    
    return 0;
}
