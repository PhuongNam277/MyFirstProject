#include "stdio.h"
#include"string.h"
int main(){
    char x[100];
    printf("Nhap ten cua ban: ");
    fgets(x, sizeof(x), stdin);
    int len = strlen(x);
    for (int i = 0; i < len-1; i++)
    {
        if(x[len-1]=='\n'){
            len = len-1;
        }
    }
    printf("Ten cua ban la: %s", x);
    printf("Do dai chuoi la : %d", len);
}