#include "stdio.h"
int main(){
    int x[100], n; printf("Nhap n = "); scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ",i+1); scanf("%d",&x[i]);
    }
    printf("\nDay so vua nhap: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", x[i]);
    }
    int max1 = x[0];
    for (int i = 0; i < n; i++)
    {
        if (x[i]>max1)
        {
            max1 =  x[i];
        }
    }
    int max2 = x[0];
    for (int i = 0; i < n; i++)
    {
        if (x[i]>max2&&x[i]<max1)
        {
            max2 = x[i];
        }
    }
    printf("\nMax thu 2 = %d",max2);
    return 0;
}