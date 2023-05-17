#include "stdio.h"
float a[100]; int n;
void nhapPhanTu(float x[100], int &n){
    printf("Nhap so phan tu n: "); scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("x[%d]= ", i);
        scanf("%f", &x[i]);
    }
}
void xuatPhanTu(float x[100], int n){
    printf("Cac phan tu vua nhap: ");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f  ", x[i]);
    }  
}
void gtln(float x[100], int n){
    float max = x[0]/n;
    for (int i = 1; i < n; i++)
    {
        float kq = (float) x[i]/(n-i);
        if(max<kq){
            max = kq; 
        }
    }
    printf("GTLN = %.2f\n", max);
    
}
void Tong(float x[100], int n){
    float tong = 0;
    if (n==1)
    {
        printf("Tong = %.2f", x[0]);
    }
    else{
        for (int i = 1; i < n; i++)
    {
        tong = tong + (x[i-1] + x[i]);
    }
    printf("Tong = %.2f", tong);
    }
    
    
    
}
int main(){
    nhapPhanTu(a,n);
    xuatPhanTu(a,n);
    gtln(a,n);  Tong(a,n);

}