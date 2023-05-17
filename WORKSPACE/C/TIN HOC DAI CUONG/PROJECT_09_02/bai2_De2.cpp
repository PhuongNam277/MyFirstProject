#include "stdio.h"
int main(){
    int x[100][100]; int m,n;
    printf("Nhap m va n: "); scanf("%d%d",&m,&n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("x[%d][%d] = ", i+1,j+1); scanf("%d",&x[i][j]);
        }
    }
    printf("Ma tran vua nhap: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
    int tong = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i][j]%2==0&&x[i][j]>2022)
            {
                tong+=x[i][j];
            }
            
        }
    }
    printf("Tong = %d",tong);
    int min = 0; 
    for (int j = 0; j < n; j++)
    {
        int minc = x[0][j];
        for (int i = 0; i < m; i++)
        {
            if (x[i][j]<minc)
            {
                minc = x[i][j];
            }
            
        }
        printf("\nGia tri nho nhat cot %d: %d",j+1,minc);
    }
    return 0;
}