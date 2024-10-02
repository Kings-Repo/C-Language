#include<stdio.h>
#include<string.h>
typedef struct Bank
{
    char name[20];
    long int bank_number;
    int amount;  
}Bank;
void print_bank_details(Bank b){
    printf("Name: %s\n",b.name);
    printf("Bank Number: %ld\n",b.bank_number);
    printf("Amount: %d\n",b.amount);
}
int main()
{
    Bank b;
    strcpy(b.name,"HELLO WORLD");
    // b.name = "King";  // direct string initialization is not possible in structures
    b.bank_number = 123456;
    b.amount = 9999999;

    print_bank_details(b);
    return 0;
}

