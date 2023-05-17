#include "stdio.h"
int a[100][100], b[100][100], c[100][100], m, n;
void nhapMaTran(int x[100][100], int y[100][100], int &m, int &n){
    printf("Nhap kich thuoc 2 ma tran: ");
    scanf("%d%d",&m,&n);
    printf("Nhap ma tran 1: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("x[%d][%d] = ", i, j);
            scanf("%d",&x[i][j]);
        }
        
    }
    printf("Nhap ma tran 2: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("y[%d][%d] = ", i, j);
            scanf("%d",&y[i][j]);
        }
        
    }
}
void tong2MaTran(int x[100][100], int y[100][100],int z[100][100], int m, int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            z[i][j]=x[i][j]+y[i][j];
        }
        
    }
}
void nhan2MaTran(int x[100][100], int y[100][100],int z[100][100], int m, int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            z[i][j]=x[i][j]*y[i][j];
        }
        
    }
}
void xuatMaTran(int x[100][100], int m, int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", x[i][j]);
        }
        printf("\n");
        
    }
}
int main(){
    nhapMaTran(a,b,m,n);
    tong2MaTran(a,b,c,m,n);
    printf("\nTong hai ma tran la: \n");
    xuatMaTran(c,m,n);
    nhan2MaTran(a,b,c,m,n);
    printf("\nTich hai ma tran la: \n");
    xuatMaTran(c,m,n);
}