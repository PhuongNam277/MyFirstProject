#include "stdio.h"
int a[100], b[100], c[100];
int n, n1, n2;

void nhapMang(int x[100], int &n){
    do
    {
        printf("Nhap so luong phan tu n : ");
        scanf("%d", &n);
    } while (n<0|| n>100);

    for (int i = 0; i < n; i++)
    {
        printf("x[%d]= ",i);
        scanf("%d",&x[i]);
    } 
}
void xuatMang(int x[100], int n){
    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }
    
}
void tachMang(int x[100], int n, int x1[100], int &n_x1, int x2[100], int &n_x2 ){
    int i1=0; n_x1=0;
    int i2=0; n_x2=0;
    for (int i = 0; i < n; i++)
    {
        if(x[i]%2==0){
            x1[i1]=x[i];
            i1++;
            n_x1++;
        }else{
            x2[i2]=x[i];
            i2++;
            n_x2++;
        }
    }
    
}




int main()
{
    nhapMang(a,n);
    xuatMang(a,n);
    printf("\n");
    tachMang(a,n,b,n1,c,n2);
    xuatMang(b,n1);
    printf("\n");
    xuatMang(c,n2);
}