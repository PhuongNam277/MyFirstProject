#include "stdio.h"
struct Date
{
    int day; int month; int year;
};
void enterDate(struct Date &d){
    printf("Nhap ngay: ");
    scanf("%d", &d.day);
    printf("Nhap thang: ");
    scanf("%d", &d.month);
    printf("Nhap nam: ");
    scanf("%d", &d.year);
}
int checkDate(struct Date d){
    if (d.day<0||d.month<0||d.year<0) return 0;
    if (d.month > 12) return 0;
    if (d.day > 31) return 0;
    if (d.month == 2){
        if (d.day > 28) return 0;
    }
    if (d.month==1||d.month==3||d.month==5||d.month==7||d.month==8||d.month==10||d.month==12){
        if (d.day>31) return 0;
    }
    if (d.day>30) return 0;
    return 1;
}
void printDate(struct Date d){
    printf("\n-----------------\n");
    printf("%d/%d/%d", d.day, d.month, d.year);
}
int main(){
    struct Date mydate;
    enterDate(mydate);
    printDate(mydate);
    printf("\nCheck: %s", checkDate(mydate)==1?"HOP LE":"KHONG HOP LE");
}