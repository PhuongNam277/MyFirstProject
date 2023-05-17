#include "stdio.h"
int a[100],n;
void nhapMang(int x[100] ,int &n)//khi nhập 1 dữ liệu vào mảng phải thêm dấu &
{
    printf("Nhap so luong phan tu n: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("x[%d]= ",i);
        scanf("%d",&x[i]);
    }
    
}
void xuatMang(int x[100], int n){
    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",x[i]);
    }
    
}
void xuatNguocMang(int x[100], int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int temp = x[i]; 
        x[i] = x[n-i-1]; 
        x[n-i-1]=temp;
    }
    
}

int main ()
{
    nhapMang(a,n);
    xuatMang(a,n);
    printf("\n");
    xuatNguocMang(a,n);
    xuatMang(a,n);
    
}