#include "stdio.h"
int main ()
{
    int i,n,a[1000];
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    for ( i = 1; i <=n; i++)
    {
        printf("Nhap phan tu thu %d : ", i);
        scanf("%d", &a);
    }
    int dem = 0;
    for ( i = 1; i <= n; i++)
    {       
        if(a[i] % 2==0)
        {
            dem++;
        }
    }
    printf("Vay co %d so chan!", dem);
    return 0;
    
}