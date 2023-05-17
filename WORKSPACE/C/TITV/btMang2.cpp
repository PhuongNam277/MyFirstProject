/* Đề bài: Nhập vào số lượng phần tử và giá trị từng phần tử của mảng, in
ra màn hình giá trị lớn nhất, nhỏ nhất của mảng vừa nhập. */
#include "stdio.h"
int a[100], n;
void nhapMang(int x[100], int &n)
{
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("x[%d]= ",i);
        scanf("%d",&x[i]);
    }
    
}
void giaTriLonNhat(int x[100], int n)
{
    int gtln;
    gtln = x[0];
    for (int i = 1; i < n; i++)
    { // 5 9 8 2
        if(gtln < x[i])
        {
            gtln = x[i];
        }
    }
    
    printf("GTLN = %d", gtln);
}
void giaTriNhoNhat(int x[100], int n)
{
    int gtnn;
    gtnn = x[0];
    for (int i = 1; i < n; i++)
    { // 5 9 8 2
        if(gtnn > x[i])
        {
            gtnn = x[i];
        }
    }
    
    printf("GTNN = %d", gtnn);
}
int main ()
{
    nhapMang(a,n);
    giaTriLonNhat(a,n);
    printf("\n")
    giaTriNhoNhat(a,n);
}