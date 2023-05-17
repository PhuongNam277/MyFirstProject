#include "stdio.h"
int main(){
    int x[10];
    int n = 10;
    printf("Nhap mang: ");
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ",i);
        scanf("%d", x+i);// thay vì dùng &x[i] thì ta sẽ dùng con trỏ (có 2 cách)
    }
    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", *(x+i));// tương tự ở trên
    }
    
    
}