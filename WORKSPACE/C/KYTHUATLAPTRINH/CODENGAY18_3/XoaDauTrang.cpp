#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main(){
    char *s, *p;
    s = (char*)malloc(sizeof(s)*50);
    printf("Nhap chuoi can chuan hoa: ");
    gets(s);
    puts(s);

    while (*s == ' ') s++;
    printf("Chuoi sau khi xoa cach dau: ");
    puts(s);
 
    p = &s[strlen(s)-1];
    while (*p == ' ')
    {
        p--;
    }
    *(p+1) = '\0';
    printf("Duoi sau khi xoa sau: ");
    puts(s);
    
}