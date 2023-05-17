#include "stdio.h"
  void swap(int *a, int *b){
    int tam = *a;
    *a = *b;
    *b = tam;
 }
void sapXepTang (int x[], int n){
    
    for (int i = 0; i < n-1; i++)
    {
        int vitrinhonhat = i;
        for (int j = i+1; j < n; j++)
        {
            if(x[j]<x[vitrinhonhat])
            {
                vitrinhonhat = j;
            }
        }
        swap( &x[i],&x[vitrinhonhat] ); //hàm đổi chỗ cho nhau
    }
}

void sapXepGiam (int x[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int vitrilonnhat = i;
        for (int j = i+1; j < n; j++)
        {
            if(x[j]>x[vitrilonnhat])
            {
                vitrilonnhat=j;
            }
        }
        swap(&x[i],&x[vitrilonnhat]);
    }
    
}
void printMang (int x[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }
    
}

int main()
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

    printf("\nMang tang dan : ");
    sapXepTang(a,n);
    printMang(a,n);
    printf("\nMang giam dan : ");
    sapXepGiam(a,n);
    printMang(a,n);
}