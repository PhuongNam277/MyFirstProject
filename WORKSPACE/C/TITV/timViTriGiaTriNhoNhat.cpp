#include "stdio.h"
int a[100],n;
void nhapMang(int x[100], int &n){
    printf("Nhap so luong phan tu : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("x[%d]= ",i);
        scanf("%d",&x[i]);
    }
}
void xuatMang(int x[100], int n){
    printf("mang vua nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", x[i]);
    }
}
void timViTri(int x[100]){
    int min = x[0];
    int viTri;
    for (int i = 0; i < n; i++)
    {
        if (x[i]<min)
        {
            min = x[i];
            viTri=i;
        }
    }
    printf("\nVi tri cua gia tri nho nhat la: %d", viTri);
}
int main(){
    nhapMang(a,n);
    xuatMang(a,n);
    timViTri(a);
}