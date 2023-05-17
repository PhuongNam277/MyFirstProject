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
void maxA(float x[100][100], int m, int n){
    float max = x[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; i++)
        {
            if (x[i][j]> max)
            {
                max = x[i][j];
            }
            
        }
    }  

    printf("max = %.2f",max); int dem=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            if(x[i][j]==max){
                dem++;
            }

        }
        
    }
    printf("Co %d gt = max", dem);
}
void minA(float x[100][100], int m, int n){
    float min = x[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; i++)
        {
            if (x[i][j]< min)
            {
                min = x[i][j];
            }
            
        }
    }  

    printf("min = %.2f",min); int dem=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j<n; j++)
        {
            if(x[i][j]==min){
                dem++;
            }

        }
        
    }
    printf("Co %d gt = min", dem);
}
int main()
{
    nhapMang(a,m,n);
    xuatMang(a,m,n);
    maxA(a,m,n);
    minA(a,m,n);
}