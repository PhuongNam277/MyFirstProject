#include "stdio.h"
#include "math.h"
int main(){
    int n; float x;
    printf("n = "); scanf("%d",&n);
    printf("x = "); scanf("%f",&x);
    float tong = 10;
    for (int i = 1; i <=n ; i++)
    {
        tong+=(pow(-1,i)*((x+i)/(2*i)));
    }
    printf("S = %.2f", tong);
    return 0;
}