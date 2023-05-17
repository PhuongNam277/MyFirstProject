#include "stdio.h"
#include "string.h"
int my_Strlen(char x[]){
    
    int count = 0;
    while (x[count]!='\0')
    {
        count++;
    }
    
    return count++;
}
void xoaXuongDong(char x[]){
    
}
int main(){
    /*char ten[502]="Nguyen Phuong Nam";
    printf("Ten cua ban la: %s\n", ten);
    printf("Do dai ten cua ban la: %d", strlen(ten));*/
    char ten[50];
    printf("Nhap ten cua ban: ");
    fgets(ten, sizeof(ten), stdin);
    size_t len = my_Strlen(ten);
    if (ten[len-1]=='\n')
    {
        ten[len-1]=='\0';
        len--;
    }
    
    printf("Do dai ten cua ban: %d", len);

}