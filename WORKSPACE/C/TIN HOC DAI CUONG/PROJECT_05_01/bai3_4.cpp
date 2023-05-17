#include "stdio.h"
#include "math.h"
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
void lietKe(float x[100], int n){
    float x1; printf("Nhap x: "); scanf("%f",&x1);
    
    for (int i = 0; i < n; i++)
    {
        if(abs(x[i]) > x1){
            printf("%.2f    ", x[i]);
        }
    }
    printf("\n");
}
void dem2PT(float x[100], int n){
    int dem =0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i]*x[j]==4||x[i]*x[j]==0&&x[i]+x[j]==4||x[i]*x[j]==0)
            {
                dem++;
            }
            
        }
    }
    printf("Co %d cap thoa man\n", dem);
}
void HTTD(float x[100], int n){
    float a, b, max;
    max = abs(x[0]) - abs(x[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((abs(x[i])-abs(x[j]))>max)
            {
                max = (abs(x[i])-abs(x[j]));
                a = x[i]; b = x[j];
            }
            
        }
    }
    printf("Hai so tm la %.2f va %.2f", a, b);
}
int main(){
    nhapPhanTu(a,n);
    xuatPhanTu(a,n);
    lietKe(a,n);
    dem2PT(a,n);
    HTTD(a,n);
}