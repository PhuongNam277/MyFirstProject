#include "stdio.h"
int main(){
    float x[100][100]; int m,n;
    printf("Nhap m va n: "); scanf("%d%d",&m,&n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("x[%d][%d] = ", i+1,j+1); scanf("%f",&x[i][j]);
        }
        
    }
    printf("Ma tran vua nhap: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.1f ",x[i][j]);
        }
        printf("\n");
    }
    float tich = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j+=2)
        {
            if (x[i][j]<2023)
            {
                tich*=x[i][j];
            }
        }
    }
    printf("\nTich = %.2f", tich); float max = x[0][0]; int c,d; 
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i][j]>max)
            {
                max = x[i][j]; c = i; d = j;
            }
            
        }
    }
    printf("\nGia tri va vi tri phan tu max: %.2f x[%d][%d]", max, c+1, d+1);
    return 0;
}