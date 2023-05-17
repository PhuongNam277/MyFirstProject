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
void tBC(float x[100], int n){
    int tong = 0; int dem =0;
    for (int i = 0; i < n; i++)
    {
        if(x[i]<10){
            tong+=x[i];
            dem++;
        }
    }
    float tbc = tong / dem;
    printf("TBC = %.2f\n", tbc);
    
}
void GTNN(float x[100], int n){
    float min = x[1] -x[0];
    for (int i = 2; i < n; i++)
    {
        if (x[i]-x[i-1]<min)
        {
            min = x[i] - x[i-1];
        }
        
    }
    printf("%.2f", min);
    
}
int main(){
    nhapPhanTu(a,n);
    xuatPhanTu(a,n);
    tBC(a,n);
    GTNN(a,n);
}