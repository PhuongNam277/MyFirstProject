//#include "stdio.h"
/*float x[100],y[100];int n;
void nhapmang(float x[100], float y[100], int &n){
    printf("Nhap so diem: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap toa do x va y diem thu %d = ",i);
        scanf("%f,%f", &x[i],&y[i]);
    }
}
int main(){
    
    nhapmang(x,y,n);
    int dem=0;
    for (int i = 0; i < n; i++)
    {
        if(x[i]<0&&y[i]<0){
            dem++;
        }
    }
    printf("So phan thu nam o goc phan tu thu 3 la: %d", dem);
    
}*/

//Bai 2: 
/*#include "stdio.h"
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
void demSoPhanTuChan(int x[100][100], int m, int n){
    int dem=0;
    for (int i = 1; i < m; i++)
    {
        for (int j = n-i; j < n; j++)
        {
            if(x[i][j]%2==0){
                dem++;
            }
        }
    }
    printf("So phan tu chan nam duoi duong cheo phu la: %d", dem);
}

int main()
{
    nhapMang(a,m,n);
    xuatMang(a,m,n);
    demSoPhanTuChan(a,m,n);
}*/
//bai 3 :
#include "stdio.h"
#include "math.h"
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
void tbcduoidcp(int x[100][100], int m, int n){
    int dem=0;
    int tong = 0;
    int tich =1;
    float tbn;
    float tbc;
    for (int i =1 ; i < m; i++)
    {
        for (int j = n-i; j < n; j++)
        {
            if(x[i][j]%2==0){
                tong+=x[i][j];
                tich*=x[i][j];
                dem++;
            }
        }
    }
    tbc = (float)tong/dem;
    tbn =(float)pow(tich, (float)1/dem);
    printf("TBC duoi DCP la: %.2f", tbc);
    printf("\nTBN duoi DCP la: %.2f", tbn);

}

int main()
{
    nhapMang(a,m,n);
    xuatMang(a,m,n);
    tbcduoidcp(a,m,n);
}