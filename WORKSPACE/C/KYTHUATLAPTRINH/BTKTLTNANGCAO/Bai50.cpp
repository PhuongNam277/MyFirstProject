#include "stdio.h"
void enterArr(float arr[], int &n){
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i+1); scanf("%f", &arr[i]);
    }
}
void pArr(float arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%.1f  ", arr[i]);
    }
}
void ChenMax(float arr[], int n, float x){
    int maxPlace;
    float max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
            maxPlace = i;
        }
    }
    n++;
    for (int i = n-1; i >= maxPlace+1; i--)
    {
        arr[i] = arr[i-1];

    }
    arr[maxPlace+1] = x;
    pArr(arr, n);
}
int main(){
    int n; printf("Nhap so luong phan tu: "); scanf("%d", &n);
    float arr[n+2]; enterArr(arr, n);
    printf("\nMang vua nhap: "); pArr(arr, n);
    printf("Nhap gia tri X can chen: "); float x; scanf("%f", &x);
    printf("\nMang sau khi chen: "); ChenMax(arr, n, x);
}