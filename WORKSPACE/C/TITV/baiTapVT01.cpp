#include "stdio.h"
    int a[1000000], n;
void nhapMang(int x[], int &n){
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    
}
void soMax(int x[], int n){
    int max = x[0];
    for (int i = 0; i < n; i++)
    {
        if(max<x[i]){
            max = x[i];
        }
    }
    printf("%d",max);
}
int main()
{
    nhapMang(a,n);
    soMax(a,n);
}