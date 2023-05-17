#include "stdio.h"
int main ()
{
    int a[100];
    int n;
    do
    {
        printf("Nhap vao so luong phan tu can tinh tong (0<n<=100) : ");
        scanf("%d", &n);
    } while (n<1 || n>100);
    //nhập các số cần tính tổng
    for (int i = 0; i < n; i++)
    {
        printf("\n a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    // in các số vừa nhập
    printf("Cac so vua nhap gom : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    //tính tổng các phần tử
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong+=a[i];
    }
    
    printf("\nTong = %d", tong); //nhớ lấy %d ra :((

    return 0;
    
    

    


}