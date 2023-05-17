#include "stdio.h"
#include "math.h"
int main ()
{
    int n;
    float x,t1,t2,tong;
    t2 = 0;
    t1 = 0;
    tong =0;
    int gt2 = 0;

    int gt1 = 1 ;
    printf("Nhap x va n : ");
    scanf("%f%d", &x,&n);
    for (int j = 1; j <=n; j++)
    {
        gt1 = gt1*j;
        t1 = t1 + pow(x,j);
        t2 = t2*gt1 ;
        tong = tong + (t1/t2);
    }
    printf("sum = %.2f", tong);

    return 0;

}