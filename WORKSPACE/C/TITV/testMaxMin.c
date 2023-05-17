#include "stdio.h"
int main ()
{
    int i,n,a[1000];
    int max;
    printf("Nhap so phan tu n : ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        printf("Nhap so phan tu thu %d : ", i);
        scanf("%d", &a);
    }
    max = a[i];
    for ( i = 2; i <= n; i++)
    {
        if(max < a[i])
        else
        {
            max = a[i];
        }
    }
    printf("Max = %d", max);
    return 0;
    
}