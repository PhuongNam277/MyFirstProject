#include "stdio.h"
struct KETQUA
{
    int tong = 0;
    int bat_dau;
    int ket_thuc;
};

int tinh_Tong(int a[100], int bat_dau, int ket_thuc){
    int tong = 0;
    for (int i = bat_dau; i <= ket_thuc; i++)
    {
        tong += a[i];
    }
    return tong;
}

KETQUA findMaxSum(int a[100], int n){
    KETQUA kq;
    kq.tong = a[0];
    kq.bat_dau = 0;
    kq.ket_thuc = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int tong = tinh_Tong(a, i, j);
            if (tong > kq.tong)
            {
                kq.tong = tong;
                kq.bat_dau = i;
                kq.ket_thuc = j;
            }
            
        }
        
    }
    return kq;
}

int main(){
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i+1);
        scanf("%d", &a[i]);
    }
    KETQUA k = findMaxSum(a,n);
    printf("\nTong day con lon nhat = %d", k.tong);
    printf("\nTu vi tri %d den vi tri %d", k.bat_dau, k.ket_thuc);
    
}