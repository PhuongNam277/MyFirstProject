/*Đề bài: Nhập vào số lượng phần tử và giá trị từng phần tử của mảng.
In ra màn hình tổng, tích và giá trị trung bình của mảng đó.*/

#include "stdio.h"
int a[100], n;
void nhapMang(int x[100], int &n)
{
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("x[%d]= ",i);
        scanf("%d",&x[i]);
    }
    
}
void tongMang(int x[100],int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += x[i];
    }
    printf("Tong = %d", tong);
}
void tichMang(int x[100],int n)
{
    int tich = 1;
    for (int i = 0; i < n; i++)
    {
        tich *= x[i];
    }
    printf("Tich = %d", tich);
}
void tbcMang(int x[100],int n)
{
    float tbc;
    int tong =0;
    for (int i = 0; i < n; i++)
    {
        tong += x[i];
    }
    tbc = tong/n;
    printf("Tbc = %.2f", tbc);
}


int main()
{
    nhapMang(a,n);
    printf("\n");
    tongMang(a,n);
    printf("\n");
    tichMang(a,n);
    printf("\n");
    tbcMang(a,n);
}