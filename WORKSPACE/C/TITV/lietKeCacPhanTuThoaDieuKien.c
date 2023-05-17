#include "stdio.h"
    int thoaDieuKien(int x)
    {
        return (x%2==0&&x%3==0); // trả về giá trị luôn
    }
int main()
{
    int a[100], n;
    do
    {
        printf("Nhap so luong phan tu n (0<n<=100) : ");
        scanf("%d",&n);
    } while (n>100||n<1);
    
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
        printf("Cac so chan chia het cho 3 la : ");
    for (int i = 0; i < n; i++)
    {
        if (thoaDieuKien(a[i]))
        {
            printf("%d ",a[i]);
        }
        
    }
    
    
}