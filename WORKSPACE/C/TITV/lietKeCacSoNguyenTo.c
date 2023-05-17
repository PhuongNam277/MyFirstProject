#include "stdio.h"
#include "math.h"
    int cacSoNguyenTo (int x)
    {
        if (x<=1)
        return 0;
        for (int i = 2; i <= sqrt(x); i++)
        {
            if(x%i==0)
            return 0;
        }
        return 1;
        
        
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
        printf("Cac so nguyen to la : ");
    for (int i = 0; i < n; i++)
    {
        if (cacSoNguyenTo(a[i]))
        {
            printf("%d ",a[i]);
        }
        
    }
}