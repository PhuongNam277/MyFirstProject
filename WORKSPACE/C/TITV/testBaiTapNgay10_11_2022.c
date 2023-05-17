#include "stdio.h"
int main ()
{
    int tuoi;char kv [50];char hoTen [50];
    printf("Nhap ho va ten: ");
    gets(hoTen);
    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);
    fflush(stdin);  //câu lệnh này giúp làm sạch bộ nhớ đệm
    printf("Nhap khu vuc: ");
    gets(kv);
    printf("\n______________________________________");
    printf("\nChao mung %s khu vuc %s da den voi CLB %d!",hoTen,kv,tuoi);
    return 0;
}