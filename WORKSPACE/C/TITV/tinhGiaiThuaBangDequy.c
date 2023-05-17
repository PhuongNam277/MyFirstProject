#include "stdio.h"
int giaithua(int n){ //khai báo hàm đệ quy
    if (n==0 || n ==1) return 1;
    else
    return n*giaithua(n-1);
    
}
int main ()
{
    int n, gt;
    do
    {
        printf("Nhap n >= 0 : ");
        scanf("%d", &n);
    } while (n<0);
    gt = giaithua(n);
    printf("%d! = %d",n,gt);
    return 0;

    
}