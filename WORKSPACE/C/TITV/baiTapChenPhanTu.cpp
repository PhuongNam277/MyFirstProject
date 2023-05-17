#include "stdio.h"
int a[100];
int n;
void nhapMang(int x[100] ,int &n)//khi nhập 1 dữ liệu vào mảng phải thêm dấu &
{
    printf("Nhap so luong phan tu n: ");
    scanf("%d",&n);

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
        printf("%d ",x[i]);
    }
    
}

//1 2 3 4 5
//1 2 3 4 5 99

void chenPhanTuCuoi(int x[100], int &n, int m ){
    int size = sizeof(x)/sizeof(x[0]);
    if(n==size){
        printf("Khong hop le!");
    }
    x[n]=m;
    n++;
}
void chenVaoDauMang(int x[100], int &n, int m){
    int size = sizeof(x)/sizeof(x[0]);
    if(n==size){
        printf("Khong hop le!");
    }
    n++;
    //1 2 3 4 5 99
    //88 1 2 3 4 5 99
    for (int i = n-1; i > 0; i--)
    {
        x[i]=x[i-1];
    }
    x[0] = m;
}
void chenVaoViTriK(int x[100], int &n, int m, int k){
    int size = sizeof(x)/sizeof(x[0]);
    if(n==size){
        printf("Khong hop le!");
    }
    n++;
    //88 1 2 3 4 5 99
    //88 1 2 77 3 4 5 99
    for (int i = n-1 ; i > k ; i--)
    {
        x[i] = x[i-1];
    }
    x[k]=m;
}
int main()
{
    nhapMang(a,n);
    xuatMang(a,n);
    printf("\n");
    chenPhanTuCuoi(a,n, 99);
    xuatMang(a,n);
    printf("\n");
    chenVaoDauMang(a,n,88);
    xuatMang(a,n);
    printf("\n");
    chenVaoViTriK(a,n,77,3);
    xuatMang(a,n);
}