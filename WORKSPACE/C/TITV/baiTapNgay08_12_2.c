/*#include "stdio.h"
int a[100][100], m;
void nhapMang(int x[100][100], int &m ){
    do
    {
        printf("Nhap cap cua mt : ");
        scanf("%d", &m);
    } while (m<0);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("x[%d][%d] = ",i,j);
            scanf("%d",&x[i][j]);
        }
        
    } 
}
void xuatMang(int x[100][100], int m){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    
}
void tinhTong(int x[100][100], int m){
    int tong = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(x[i][j]%3==0||x[i][j]%4==0)
            {
                tong += x[i][j];
            }
        }
        
    }
    printf("Tong = %d", tong);

}

int main()
{
    nhapMang(a,m);
    xuatMang(a,m);
    tinhTong(a,m);
}*/

#include "stdio.h"
int main(){
    int socanho;
    printf("Nhap so can ho : ");
    scanf("%d", &socanho);
    int cd,cr;
    int tong =0;
    for (int i = 1; i <= socanho; i++)
    {
        printf("Nhap cdai va chieu rong can ho thu %d : ", i);
        scanf("%d%d",&cd, &cr);
        int dt = cd*cr;
        if(dt< 100)
        {
            tong+=dt;
        }
    }
    printf("Tong = %d", tong);
}
