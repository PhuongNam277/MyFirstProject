#include "stdio.h"
int a[100][100],m, n;
void nhapMang(int x[100][100], int &m, int &n){
    do
    {
        printf("Nhap m va n : ");
        scanf("%d%d", &m,&n);
    } while (m<0||n<0);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("x[%d][%d] = ", i,j);
            scanf("%d",&x[i][j]);
        }
    }
}
void xuatMang(int x[100][100], int m, int n){
    for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < n; j++)
       {
            printf("%d  ", x[i][j]);
       }
       printf("\n");
    }
    
}

int timKiem(int x[100][100], int m, int n, int giaTriTimKiem){
    int kq = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(x[i][j]==giaTriTimKiem){
                kq =1;
            }
        }
        
    }
    return kq;
}

void thucHienTimKiem(int x[100][100], int m, int n){
    int giaTriTimKiem;
    int kq;
    int luachon = 0;
    do
    {
        printf("\nNhap gia tri can tim kiem: ");
        scanf("%d",&giaTriTimKiem);
        kq = timKiem(a,m,n,giaTriTimKiem);
        if (kq)
    {
        printf("\nTim thay gia tri trong mang!");
    }
         else{
        printf("Khong tim thay gia tri trong mang!");
    }
        printf("\nNhap so bat ki de tiep tuc, nhap so 0 de thoat: ");
        scanf("%d",&luachon);
    } while (luachon!=0);
    
    
}

int main(){
    nhapMang(a,m,n);
    xuatMang(a,m,n);
    thucHienTimKiem(a,m,n);
}
    
    

