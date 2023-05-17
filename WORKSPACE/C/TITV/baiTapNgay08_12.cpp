/*  Bài 1 
#include "stdio.h"
float a[100];
int n;
void nhapMang( float x[100], int &n){
    printf("Nhap so luong phan tu n : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
    }   
}
void tinhTBC(float x[100], int n){
    int dem = 0;
    float tong =0;
    for (int i = 0; i < n; i++)
    {
        tong+=x[i];
        dem++;
    }
    float tbc = (float)tong/dem;
    printf("\n TBC HS cua lop la : %.2f", tbc);
}
int main(){
    nhapMang(a,n);
    tinhTBC(a,n);
    
}*/

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

void xuatMang(int x[100][100], int m, int n){
    printf("Ma tran vua nhap la : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d   ", x[i][j]);
        }
        printf("\n");
    }
    
}

/*void tich(int x[100][100], int m, int n){
    int tich = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(x[i][j]%2!=0&&x[i][j]%5!=0){
                tich*=x[i][j];
            }
        }
        
    }

    printf("Tich = %d", tich);
    
}*/

/*void sapXepMang(int x[100][100], int m, int n){
    int k = m*n;
    for (int i = 0; i < k-1; i++)
    {
        for (int j = i+1; j < k; j++)
        {
            if (x[i/n][i%n]>x[j/n][j%n])
            {
                int temp = x[i/n][i%n];
                x[i/n][i%n] = x[j/n][j%n];
                x[j/n][j%n] = temp;
            }
            
        }
        
    }
    printf("Ma tran tang dan : \n");
    xuatMang(a,m,n);
}*/
int main()
{
    nhapMaTran(a,m,n);
    xuatMang(a,m,n);
    //tich(a,m,n);
    //sapXepMang(a,m,n);
}