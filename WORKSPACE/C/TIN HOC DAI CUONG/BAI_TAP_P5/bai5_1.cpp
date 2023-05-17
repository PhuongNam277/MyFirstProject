#include "stdio.h"
#include "math.h"
int tinhGT(int n){
    int gt = 1;
    for (int i = 1; i <=n; i++)
    {
        gt = gt*i;
    }
    return gt;
}
float tu(float x, int n){
    float tu;
    for (int i = 1; i <=n; i++)
    {
        tu = pow(x,i);
    }
    return tu;
}
int main(){
    float x; int n; printf("x = "); scanf("%f",&x); printf("n = "); scanf("%d", &n);
    float tong=1;
    for (int i = 1; i <= n; i++)
    {
        tong+=tu(x,i)/tinhGT(i);
    }
    printf("e^x xap xi = %.2f", tong);
    return 0;
}

