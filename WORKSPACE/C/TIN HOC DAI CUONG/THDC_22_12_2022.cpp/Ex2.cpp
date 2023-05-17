#include "stdio.h"
float a[100][100]; int m,n;
void nhapMang( float x[100][100], int &m, int &n ){
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
        for (int j = 0; j < n; j++) printf("%.2f  ", a[i][j]);
        printf("\n");
    }   
}
void timMax(float x[100][100], int m, int n){
    float max;
    for (int i = 0; i < m; i++)
    {
        max = x[i][0];
        for (int j = 1; j < n; j++)
        {
            if(x[i][j]> max) max = x[i][j];
        }
        printf("Max H%d is: %.2f", i, max);
        printf("\n");       
    }   
}
int main()
{
    nhapMang(a,m,n);
    xuatMang(a,m,n);
    timMax(a,m,n);
}