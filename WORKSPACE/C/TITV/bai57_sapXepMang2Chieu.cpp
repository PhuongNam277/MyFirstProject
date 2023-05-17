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

void sapXepTang(int x[100][100], int m, int n){
    int k = m*n;
    for (int i = 0; i < k-1; i++)
    {
        for ( int j = i+1; j < k; j++)
        {
            if(x[i/n][i%n]>x[j/n][j%n]){
                int temp = x[i/n][i%n];
                x[i/n][i%n] = x[j/n][j%n];
                x[j/n][j%n] = temp;

            }
        }
        
    }
    
}
void sapXepGiam(int x[100][100], int m, int n){
    int k = m*n;
    for (int i = 0; i < k-1; i++)
    {
        for ( int j = i+1; j < k; j++)
        {
            if(x[i/n][i%n]<x[j/n][j%n]){
                int temp = x[i/n][i%n];
                x[i/n][i%n] = x[j/n][j%n];
                x[j/n][j%n] = temp;

            }
        }
        
    }
    
}

int main()
{
    nhapMang(a,m,n);
    xuatMang(a,m,n);
    printf("\nSap xep tang: \n");
    sapXepTang(a,m,n);
    xuatMang(a,m,n);
    printf("\nSap xep giam: \n");
    sapXepGiam(a,m,n);
    xuatMang(a,m,n);
}
