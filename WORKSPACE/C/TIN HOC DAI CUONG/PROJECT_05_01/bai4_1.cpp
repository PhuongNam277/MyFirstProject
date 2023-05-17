#include "stdio.h"
float a[100][100]; int m,n;
void nhapMang(float x[100][100], int &m, int &n ){
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
            scanf("%f",&x[i][j]);
        }
        
    } 
}
void xuatMang(float x[100][100], int m, int n){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.2f  ", a[i][j]);
        }
        printf("\n");
    }
    
}
void GTD(float x[100][100], int m, int n){
    float tong =0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(x[i][j]>0){
                tong += x[i][j];
            }
        }
        
    } 
    printf(" S =%.2f", tong);
}
void tich(float x[100][100], int m, int n){
    float tich = 1;
    for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < n; j++)
       {
            if (x[i][j]%2!=0)
            {
                tich *= x[i][j];
            }
            
       }
       
    }
    printf("\n P = %.2f", tich);
}
int main()
{
    nhapMang(a,m,n);
    xuatMang(a,m,n);
    GTD(x,m,n);
    tich(x,m,n);
}