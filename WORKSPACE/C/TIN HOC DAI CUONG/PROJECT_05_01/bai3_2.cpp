#include "stdio.h"
int a[100]; int n;
void nhapPhanTu(int x[100], int &n){
    printf("Nhap so phan tu n: "); scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("x[%d]= ", i);
        scanf("%d", &x[i]);
    }
}
void xuatPhanTu(int x[100], int n){
    printf("Cac phan tu vua nhap: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", x[i]);
    }  
}
void demSPT(int x[100], int n){
    int dem =0;
    for (int i = 1; i <n; i++)
    {
        if (x[i]%x[i-1]==0)
        {
            dem++;
        }
        
    }
    printf("Co %d bo so\n", dem);
}
void tinhTong(int x[100], int n){
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            tong = tong + x[j];
        }
        
    }
    printf("Tong = %d", tong);
}
int main(){
    nhapPhanTu(a,n);
    xuatPhanTu(a,n);
    demSPT(a,n);
    tinhTong(a,n);
}