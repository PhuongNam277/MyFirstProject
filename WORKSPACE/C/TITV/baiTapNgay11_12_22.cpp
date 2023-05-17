#include "stdio.h"
int main(){
    int n;
    printf("Nhap so luong diem :");
    scanf("%d",&n);
    int hoanh,tung, tong=0;
    for (int i = 1 ; i <= n; i++)
    {
        printf("Nhap hoanh do va tung do x[%d] : ",i);
        scanf("%d%d", &hoanh, &tung);
        tong+=hoanh;
    }
    printf("Tong hoanh do = %d", tong);

}