#include "stdio.h"
void swap_thamtri(int a, int b){
    int tam = a;
    a=b;
    b=tam;
}
void swap_thamchieu(int &a, int &b) {
    int tam = a;
    a=b;
    b=tam;
}
int main ()
{
    int a,b;
    printf("Nhap a va b : ");
    scanf("%d%d", &a, &b);
    printf("Gia tri ban dau : a = %d va b = %d", a,b);
    swap_thamchieu(a,b);
    printf("\nGia tri sau khi truyen tham chieu : a = %d va b = %d", a,b);
    
    return 0;
}