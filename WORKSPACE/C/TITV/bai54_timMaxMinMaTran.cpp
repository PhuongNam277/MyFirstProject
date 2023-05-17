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

int timMax(int x[100][100], int m, int n){
    int max = x[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(max<x[i][j]){
                max = x[i][j];
            }
        }
        
    }
    return max;
}

int timMin(int x[100][100], int m, int n){
    int min = x[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(min>x[i][j]){
                min = x[i][j];
            }
        }
        
    }
    return min;
}

int main()
{
    nhapMang(a,m,n);
    xuatMang(a,m,n);
    printf("Greatest of matrix is : %d", timMax(a,m,n));
    printf("\nSmallest of matrix is : %d", timMin(a,m,n));
}