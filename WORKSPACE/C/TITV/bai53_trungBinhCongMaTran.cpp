#include "stdio.h"
int a[100][100], m, n;
void nhapMaTran(int x[100][100], int &m, int &n){
    printf("Nhap m va n : ");
    scanf("%d%d", &m, &n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("x[%d][%d] = ", i,j);
            scanf("%d", &x[i][j]);
        }
        
    }
}
void xuatMaTran(int x[100][100], int m, int n){
    printf("Ma tr vua nhap la : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
            printf("%d ", x[i][j]);
        }
        printf("\n");
        
    }
    
}

/*int tinhTrungBinhCong(int x[100][100], int m, int n){
    float tong =0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tong+=x[i][j];
        }
        
    }
    float tbc; tbc =  tong/(m*n);
    printf("TBC = %.2f", tbc);

}*/

void tbcCacSoChiaHetCho2(int x[100][100], int m, int n){
    float tong=0; int dem=0; float tbc;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(x[i][j]%2==0){
                tong+=x[i][j];
                dem++;
            }
        }
        
    }
    tbc = tong / dem;
    printf("TBC chia het cho 2 la: %.2f", tbc);
}
    

int main()
{
    nhapMaTran(a,m,n);
    xuatMaTran(a,m,n);
    //tinhTrungBinhCong(a,m,n);
    tbcCacSoChiaHetCho2(a,m,n);
}