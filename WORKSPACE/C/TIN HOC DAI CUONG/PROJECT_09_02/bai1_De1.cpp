#include "stdio.h"
#include "math.h"
int main(){
    int x[100], n;
    printf("Nhap n: "); scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ",i+1); scanf("%d",&x[i]);
    }
    printf("Day so vua nhap: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",x[i]);
    }
    int max = x[0]*x[1]*x[2]; int a, b, c;
    for (int i = 1; i < n-2; i++)
    {
        if (x[i]*x[i+1]*x[i+2]>max)
        {
            max = x[i]*x[i+1]*x[i+2];
            a = x[i]; b = x[i+1]; c= x[i+2];
        }
        
    }
    printf("\nBo 3 so : %d %d %d", a,b,c);
}