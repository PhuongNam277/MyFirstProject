#include "stdio.h"
#include "math.h"
int check(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int soNguyen[n + 1];
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i + 1);
        scanf("%d", &soNguyen[i]);
    }
    printf("\nCac so nguyen to la: ");
    for (int i = 0; i < n; i++)
    {
        if (check(soNguyen[i]))
        {
            printf("%d  ", soNguyen[i]);
        }
    }
}