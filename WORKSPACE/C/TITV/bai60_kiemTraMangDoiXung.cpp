#include "stdio.h"
int a[100][100], n;
void nhapMaTran(int x[100][100], int &n){
    do
    {
        printf("Nhap cap cua ma tran: ");
        scanf("%d",&n);
    } while (n<=0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("x[%d][%d] = ", i,j);
            scanf("%d",&x[i][j]);
        }     
    }
}
void xuatMaTran(int x[100][100], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", x[i][j]);
        }
        printf("\n");
    }
}
int kiemTraDX(int x[100][100], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(x[i][j]!=x[j][i]){
                return 0;
            }
        }
        
    }
    return 1;
}
int main(){
    nhapMaTran(a,n);
    xuatMaTran(a,n);
    printf(kiemTraDX(a,n)==1?"Mang doi xung qua duong cheo chinh":"\nMang khong doi xung qua duong cheo chinh");
}