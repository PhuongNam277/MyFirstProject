#include "stdio.h"
#include "math.h"
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
        printf("(%d, %d)", a[i], b[i]);
    }
}
void tinhGiaTri(int a[100], int b[100], int n){
    float s=0;
    for (int i = 0; i < n; i++)
    {
        s = s + sqrt(pow(a[i]-b[i],2));
    }
    printf("S = %.2f", s);
}
void XD(int a[100], int b[100], int n){
    float min = sqrt(pow(a[0],2)-pow(b[0],2));
    float x,y;
    for (int i = 1; i < n; i++)
    {
        if (sqrt(pow(a[i],2)-pow(b[i],2))< min)
        {
            min = sqrt(pow(a[i],2)-pow(b[i],2));
            x = a[i]; y= b[i];
        }
        
    }
    printf("Diem gan O nhat: (%d, %d)", x, y);
}
int main(){
    nhapDiem(x, y, n);
    xuatDiem(x, y, n);
    tinhGiaTri(x,y,n);
    XD(x,y,n);
}