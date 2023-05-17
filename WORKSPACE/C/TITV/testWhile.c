#include <stdio.h>
int main ()
{
    int n;
    int i = 0;
    int tong = 0;
    printf("Nhap n : ");
    scanf("%d", &n);
    while (i<=n)
    {
        i++;
        printf("%d\n",i);
        tong += i;
        
    }
    printf("Tong cac so hang = %d", tong);
    return 0;
}