#include "stdio.h"
int a[100], n, x;
void nhapMang(int x[100], int &n){
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    
}

int timKiem (int x[100], int n, int tk){
    int kq = 0;
    for (int i = 0; i < n; i++)
    {
        if(tk==x[i]){
            kq = 1;
            return 1; //trả về giá trị phải dùng ham int
        }
    }
    return kq;
}

void thucHienTimKiem (int x[100], int n){
    int tk;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &tk);
    int kq = timKiem(x,n,tk);
    if(kq==1){
        printf("Tim thay!");
    }else printf("Khong tim thay!");
}
int main ()
{
    nhapMang(a,n);
    printf("\n");
    thucHienTimKiem(a,n);
}