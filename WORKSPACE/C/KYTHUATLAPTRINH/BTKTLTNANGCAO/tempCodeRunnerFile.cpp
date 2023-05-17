#include "stdio.h"
void nhapMaTran(int x[100][100], int &n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("x[%d][%d] = ", i+1, j+1); scanf("%d", &x[i][j]);
        }
    }
}

void maxDuongCheoChinh(int x[100][100], int n){
    int maxDCC = x[0][0];
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j <= i; j++)
        {
            if (x[i][j]>maxDCC)
            {
                maxDCC = x[i][j];
            }
            
        }
        
    }
    printf("%d", maxDCC);
}

void giaTriTrungBinh(int x[100][100], int n, int x1){
    int tong = 0, dem = 0; float tbc;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i][j]<x1)
            {
                tong+=x[i][j];
                dem++;
            }
            
        }
    }
    tbc = (float)tong/dem;
    printf("%.2f", tbc);
}

void dongSumMax(int x[100][100], int n){
    int tong = 0; int hangMax = x[0][1]+x[0][2]+x[0][3]; int rs;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tong+=x[i][j];
            if (tong>hangMax)
            {
                hangMax = tong;
                rs = i;
            }
        }
        tong = 0;
    }
    printf("%d", rs+1);
}

void sapXep(int x[100][100], int n){
    //sap xep hang
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (x[i][j]>x[i][k])
                {
                    temp = x[i][j];
                    x[i][j] = x[i][k];
                    x[i][k] = temp;
                    break;
                }
                
            }
            
        }
        
    }

    // sap xep cot
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j <= n*(n-2)+i; j+=3)
    //     {
    //         for (int k = j+3; k <= n*(n-1)+i; k+=3)
    //         {
    //             if (x[i][j]>x[i][k])
    //             {
    //                 temp = x[i][j];
    //                 x[i][j] = x[i][k];
    //                 x[i][k] = temp;
    //                 break;
    //             }
                
    //         }
            
    //     }
        
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    
}

int main(){
    int n; printf("Nhap cap cua ma tran: "); scanf("%d", &n);
    int x[100][100];
    nhapMaTran(x, n); 
    // printf("\nMax dcc la: "); maxDuongCheoChinh(x, n);
    sapXep(x, n);
}