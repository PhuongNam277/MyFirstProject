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
    char gt;
    int m,k;
    do
    {
        printf("\nMENU :");
        printf("\n1 - Nhap mang");
        printf("\n2 - Xuat mang");
        printf("\n3 - Chen phan tu vao dau mang");
        printf("\n4 - Chen phan tu vao cuoi mang");
        printf("\n5 - Chen phan tu vao vi tri k");
        printf("\nX - Thoat");
        printf("\n------------------------------------");
        printf("\nNhap tac vu ban muon lam : ");
        scanf(" %c", &gt);

        if (gt =='1')
        {
            nhapMang(a,n);
        }
        else if (gt == '2')
        {
            xuatMang(a,n);
        }

        if(gt =='3'|| gt == '4' || gt == '5'){
            printf("Nhap gia tri muon them vao: ");
            scanf("%d", &m);
        }

        if (gt == '3')
        {
            chenVaoDauMang(a,n,m);
        }
        else if (gt == '4')
        {
            chenPhanTuCuoi(a,n,m);
        }
        else if (gt == '5')
        {
            printf("Nhap vi tri K: ");
            scanf("%d", &k);
            chenVaoViTriK(a,n,m,k);
        }
        
        
        
        
    } while (gt != 'X');
    
}