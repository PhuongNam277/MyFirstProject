#include "stdio.h"
void enterArr(float arr[], int &n){
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i+1); scanf("%f", &arr[i]);
    }
}
void printArr(float arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%.1f  ", arr[i]);
    }
    
}
void deleteArr(float arr[], int n, float x){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j+1];
            }
            n--;
            i--;
        }
        
    }
    printArr(arr, n);
    
}
int main(){
    int n; printf("Nhap so luong phan tu: "); scanf("%d", &n);
    float arr[n]; enterArr(arr, n); 
    printf("\nMang vua nhap: "); printArr(arr, n);
    printf("\nNhap vao gia tri can xoa: "); float x; scanf("%f", &x);
    printf("\nMang sau khi da xoa: "); deleteArr(arr, n, x);
    return 0;
}