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

/*void xoaDong(int x[100][100], int &m, int n, int k){
    if(k<0||k>=m) return;
    for (int i = k ; i < m-1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            x[i][j]=x[i+1][j];
        }
        
    }
    m=m-1;
}*/

void xoaCOt(int x[100][100], int m, int &n, int k){
    if(k<0||k>=n) return;
    for (int i = 0 ; i < m; i++)
    {
        for (int j = k; j < n-1; j++)
        {
            x[i][j]=x[i][j+1];
        }
        
    }
    n=n-1;
}

int main()
{
    nhapMang(a,m,n);
    xuatMang(a,m,n);
    xoaCOt(a,m,n,1);
    //xoaDong(a,m,n,1);
    xuatMang(a,m,n);
}