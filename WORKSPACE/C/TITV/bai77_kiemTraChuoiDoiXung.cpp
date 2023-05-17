#include "stdio.h"
#include "string.h"
void xoaXuongDong(char x[]){
    size_t len = strlen(x);
      if (x[len-1]='\n')
        {
            x[len-1] ='\0';
        }
        
    
}
int kiemTra(char x[]){
    size_t len = strlen(x);
    for (int i = 0; i < len/2; i++)
    {
        if (x[i]!=x[len-i-1])
        {
            return 0;
        }
        
    }
    return 1;
}
int main(){
    char s[100];
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    xoaXuongDong(s);
    if (kiemTra(s))
    {
        printf("Chuoi doi xung!");
    }
    else 
    {
        printf("Chuoi khong doi xung!");
    }
}