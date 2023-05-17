#include "stdio.h"
int a[100][100],n;
int dt;
void nhapMang(int x[100][100], int &n){
    do
    {
        printf("Nhap mt c2 hoac c3 : ");
        scanf("%d",&n);
    } while (n<0||n>3 || n==1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("x[%d][%d] = ",i,j);
            scanf("%d",&x[i][j]);
        } 
    } 
}
void xuatMang(int x[100][100],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
}
void dinhThucCap2(int x[100][100], int dt){
    dt = (x[1][1]*x[0][0])-(x[1][0]*x[0][1]);
    printf("Dinh thuc cua ma tran la: %d", dt);
}
void dinhThucCap3(int x[100][100], int dt){
    int dcc = x[0][0]*x[1][1]*x[2][2]+x[1][0]*x[2][1]*x[0][2]+x[0][1]*x[1][2]*x[2][0];
    int dcp = x[0][2]*x[1][1]*x[2][0]+x[1][2]*x[2][1]*x[0][0]+x[0][1]*x[1][0]*x[2][2];
    dt = dcc - dcp;
    printf("Dinh thuc cua ma tran la: %d", dt);
}
int main()
{
    nhapMang(a,n);
    xuatMang(a,n);
    if(n==2){
        dinhThucCap2(a,dt);
    }
    else if (n==3)
    {
        dinhThucCap3(a,dt);
    }
}