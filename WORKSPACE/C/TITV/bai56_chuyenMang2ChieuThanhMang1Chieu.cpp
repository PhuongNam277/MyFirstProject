#include "stdio.h"
int a[100][100], b[10000], k, m,n;
void nhapMang(int x[100][100], int &m, int &n ){
    do
    {
        printf("Nhap m va n: ");
        scanf("%d%d", &m, &n);
    } while (m<0||n<0);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("x[%d][%d] = ",i,j);
            scanf("%d",&x[i][j]);
        }
        
    } 
}
void xuatMang(int x[100][100], int m, int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    
}

void chuyenMang(int x[100][100], int m, int n, int y[10000], int &k){
    k = m*n;
    int index = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            y[index] = x[i][j];
            index++;
        }
        
    }
    
}

void xuatMang1Chieu(int x[10000], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", x[i]);
    }
    
}

int main()
{
    nhapMang(a,m,n);
    xuatMang(a,m,n);
    chuyenMang(a,m,n,b,k);
    printf("Mang 1 chieu la : ");
    xuatMang1Chieu(b,k);
}