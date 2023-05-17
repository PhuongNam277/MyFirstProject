#include "stdio.h"
#include "string.h"
int main(){
    char chuoi[100];
    printf("Nhap chuoi: ");
    gets(chuoi);
    
    printf("Chuoi dao nguoc: %s",strrev(chuoi));
}