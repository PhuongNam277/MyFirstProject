#include "stdio.h"
void nhapMang(int arr[], int &n){
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i+1); scanf("%d", &arr[i]);
    }
}

void find(int arr[], int n){
    int phanTuAm;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<0)
        {
            phanTuAm = arr[i]; break;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<0&&arr[i]>phanTuAm)
        {
            phanTuAm = arr[i];
        }
        
    }
    printf("%d", phanTuAm);
}

int main(){
    int n; printf("Nhap so luong phan tu: "); scanf("%d", &n);
    int arr[n+1];
    nhapMang(arr, n);
    printf("Phan tu am lon nhat la: ");
    find(arr, n);
    return 0;
}