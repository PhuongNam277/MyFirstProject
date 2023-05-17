#include "stdio.h"
int a[100][100], m,n;
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
void inHangChanVaTinhTong(int x[100][100], int m, int n){
    int tong =0;
    for (int i = 0; i < m; i++)
    {
        
        if (i%2==0)
        {
            printf("Hang %d: \n", i);
            for (int j = 0; j < n; j++)
            {
                printf("%d  ", x[i][j]);
                tong += x[i][j];
            }
            printf("\nTong hang %d = %d", i, tong);
            tong = 0;
            printf("\n");
        }
    }
}
void GTLNC1(int x[100][100], int m, int n){
    int max = x[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            if(x[i][j]>max) max = x[i][j];
        }
        
    }
    printf("Max c1 = %d", max);
    
}
int main()
{
    nhapMang(a,m,n);
    xuatMang(a,m,n);
    printf("\n\n");
    inHangChanVaTinhTong(a,m,n);
    GTLNC1(a,m,n);
}