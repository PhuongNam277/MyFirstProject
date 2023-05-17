#include "stdio.h"
void nhap(int x[100], int &n){
    printf("n = "); scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i+1); scanf("%d",&x[i]);
    }
}
int gtam(int x[100], int n){
    int b[100]; int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i]<0)
        {
            dem++;
            b[i] = x[i];
        }
    }
    if (dem > 0)
    {
        int maxam = b[0];
        for (int i = 1; i < n; i++)
        {
            if (maxam<b[i])
            {
                maxam = b[i];
            }
        }
        printf("\nMax am = %d", maxam);
    }else return 0;
}
int sochanfirst(int x[100], int n){
    for (int i = 0; i < n; i++)
    {
        if (x[i]%2==0)
        {
            printf("So chan first = %d", x[i]);
            break;
        }else return 1;   
    }  
}
bool ktra(int x[100], int n){
    bool kq = false;
    for (int i = 0; i < n-1; i++)
    {
        if(x[i+1]>x[i])
        {
            kq = true;
        }
    }
    if (kq==true)
    {
        printf("\nMang tang dan");
    }else if (kq==false)
    {
        printf("\nMang khong tang dan");
    }
    return 0;
}
bool ktcsc(int x[100], int n){
    int q= x[1]-x[0]; int dem =0;
    for (int i = 0; i < n-1; i++)
    {
        if (x[i+1]= x[i]+q)
        {
            dem++;
        }
    }
    if (dem==n-1)
    {
        printf("\nDay la csc tang dan");
    }else printf("\nDay khong phai la csc tang dan");
}
int main(){
    int a[100]; int n;
    nhap(a,n);
    gtam(a,n);
    sochanfirst(a,n);
    ktra(a,n);
    ktcsc(a,n);
}
