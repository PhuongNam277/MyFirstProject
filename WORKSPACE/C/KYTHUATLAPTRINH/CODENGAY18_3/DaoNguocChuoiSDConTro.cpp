#include "stdio.h"
#include "stdlib.h"
#include "string.h"
void xxd(char x[]){
    size_t len = strlen(x);
    if (x[len-1]=='\n')
    {
        x[len-1] = '\0';
    }
}

void daoNguoc(char x[]){
    //abcdef
    size_t len = strlen(x);
    for (int i = 0; i < len/2 ; i++)
    {
        char tam = x[i];
        x[i] = x[len-i-1];
        x[len-i-1] = tam;
    }
}
int main(){
    char x[100]; printf("Nhap chuoi can dao nguoc: ");
    fflush(stdin); fgets(x, sizeof(x), stdin); xxd(x);
    daoNguoc(x);
    printf("Chuoi sau khi dao nguoc: %s",x);
}