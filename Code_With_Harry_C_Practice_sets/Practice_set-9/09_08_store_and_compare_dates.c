#include<stdio.h>
typedef struct Date{
    int day;
    int month;
    int year;
}Date;
void date_input(Date *d){
    printf("Enter Day: ");
    scanf("%d",&d->day);
    printf("Enter Month: ");
    scanf("%d",&d->month);
    printf("Enter Year: ");
    scanf("%d",&d->year);
}
void print_date(Date d){
    printf("Day: %d\n",d.day);
    printf("Month: %d\n",d.month);
    printf("Year: %d\n",d.year);
    printf("Date: %d/%d/%d\n",d.day,d.month,d.year);
}
void compare_dates(Date d1, Date d2){
    int flag=0;
    
    if(d1.day == d2.day && d1.month == d2.month && d1.year == d2.year){
        flag =1;
    }

    if(flag == 0){
        printf("Doesn't Match\n");
    }else{
        printf("Matched\n");
    }
}
int main(){
    Date d1,d2;

    date_input(&d1);
    date_input(&d2);

    print_date(d1);
    print_date(d2);

    compare_dates(d1,d2);

    return 0;
}