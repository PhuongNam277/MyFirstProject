#include "stdio.h"
int main ()
{
    int n;
    int giaithua = 1 ;
    printf("Nhap so n de tinh giai thua : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        giaithua = giaithua * i;
    }
    if (n==0)
    {
        printf("0! = 1");
    }
    else if (n < 0)
    {
        printf("Ban can nhap gia tri >= 0");
    }
    else
    {
         printf("%d! = ", n);
    printf("%d", giaithua);
    }
    
    
    
    return 0;
}