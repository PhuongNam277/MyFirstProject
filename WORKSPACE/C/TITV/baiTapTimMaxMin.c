#include "stdio.h"
int timMax(int x[], int n)
{
    int max = x[0];
    for (int i = 1; i < n; i++)
    {
        if(x[i]>max)
        max = x[i];
    }
    return max;
}
int timMin(int x[], int n)
{
    int min = x[0];
    for (int i = 1; i < n; i++)
    {
        if(x[i]<min)
        min = x[i];
    }
    return min;
}
int main ()
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
    printf("Max = %d", timMax(a,n));
    printf("\nMin = %d", timMin(a,n));
}