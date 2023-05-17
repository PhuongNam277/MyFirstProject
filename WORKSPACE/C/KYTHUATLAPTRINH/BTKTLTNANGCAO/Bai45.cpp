#include "stdio.h"
#include "math.h"
void nhapMang(int arr[], int &n){
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i+1); scanf("%d", &arr[i]);
    }
}
int checSNT(int number){
    if (number<2)
    {
        return 0;
    }
    else{
        for (int i = 2; i <= sqrt(number); i++)
        {
            if (number%i==0)
            {
                return 0;
            }   
        }
    }
    return 1;
}

void tinhTBC(int arr[], int n){
    int dem = 0; int tong = 0;
    for (int i = 0; i < n; i++)
    {
        if (checSNT(arr[i]))
        {
            dem++; tong+=arr[i];
        }
        
    }
    printf("%.2f", (float)(tong)/dem);
}

int main(){
    int n; printf("Nhap so luong phan tu: "); scanf("%d", &n);
    int arr[n+1];
    nhapMang(arr, n);
    tinhTBC(arr, n);
    return 0;
}