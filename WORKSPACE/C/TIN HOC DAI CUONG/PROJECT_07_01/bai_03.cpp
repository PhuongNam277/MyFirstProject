#include "stdio.h"
#include "math.h"
int main(){
    float t=1,m=0,kq,x;
    int n;
    printf("Nhap n: "); scanf("%d",&n);
    printf("Nhap x: "); scanf("%f",&x);
    for (int i = 1; i <= n; i++)
    {
        t+=(i*pow(x,i));
        m+=i;
    }
    kq = t/m; printf("S= %.2f",kq);
}