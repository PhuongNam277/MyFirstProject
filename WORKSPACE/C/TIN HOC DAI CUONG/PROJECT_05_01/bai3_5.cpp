#include "stdio.h"
int x[100], y[100],n;
void nhapDiem(int a[100], int b[100], int &n){
    printf("Nhap so diem: "); scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap x%d va y%d: ", i,i);
        scanf("%d%d",&a[i], &b[i]);
    }
}
void xuatDiem(int a[100], int b[100], int n){
    for (int i = 0; i < n; i++)
    {
        printf("")
    }
    
}