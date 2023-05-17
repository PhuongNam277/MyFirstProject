#include "stdio.h"
int main(){
    int n, x[100];
    printf("Nhap so luong phan tu: "); scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i+1); scanf("%d", &x[i]);
    }
    
    int doDaiMax = 1;
    int viTriBatDau = 0;
    int doDaiDayConHienTai = 1;
    int viTriDayConHienTai = 0;

    for (int i = 1; i < n; i++)
    {
        // 2, 3, 5, 1, 6, 7, 9, 8

        if (x[i] > x[i-1])
        {
            doDaiDayConHienTai++;
        } 
        else
        {
            if (doDaiDayConHienTai > doDaiMax)
            {
                doDaiMax = doDaiDayConHienTai;
                viTriBatDau = viTriDayConHienTai;
            }
            
            doDaiDayConHienTai = 1;
            viTriDayConHienTai = i;
        }
    }

    // xử lý trường hợp dãy con tăng dần có chiều dài bằng n
    
    if (doDaiDayConHienTai > doDaiMax )
    {
        doDaiMax = doDaiDayConHienTai;
        viTriBatDau = viTriDayConHienTai;
    }
    

    for (int i = viTriBatDau; i < viTriBatDau + doDaiMax; i++)
    {
        printf("%d ", x[i]);
    }
    

}