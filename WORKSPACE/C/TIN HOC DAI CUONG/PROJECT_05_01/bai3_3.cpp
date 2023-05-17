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
void kiemTra(int x[100], int n){
    int c; int dem =0;
    for (int i = 1; i < n; i++)
    {
        if(x[i-1]<x[i]){
            dem++;
        }
    }
    if(dem>0){
        printf("Day da tang dan\n");
    }
    else
    {
        printf("Day chua tang dan\n");
    }
}
void tinhTong(int x[100], int n){
    float tong; int tu=0, mau=0;
    for (int i = 0; i < n; i++)
    {
        tu = tu + (x[i]*x[i+1]);
        mau = mau + (i+1);
    }
    tong = (float)tu/mau;
    printf("S = %.2f", tong);
}
int main(){
    nhapPhanTu(a,n);
    xuatPhanTu(a,n);
    kiemTra(a,n);
    tinhTong(a,n);
}