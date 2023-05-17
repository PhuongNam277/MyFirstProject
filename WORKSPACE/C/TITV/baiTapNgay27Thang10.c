#include "stdio.h"
#include "math.h"
int main()
{
    int n;
    float x,tong;
    printf("Nhap x, n : ");
    scanf("%f%d", &x,&n);
    tong = 2010;
    for (int i = 1; i<=n; i++)
    {
        tong = tong + ((pow(x,i)+i)/(2*i));
    }
    printf("Sum = %.2f", tong);

    return 0;

}