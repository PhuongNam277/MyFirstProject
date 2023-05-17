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
void sortUp(float arr[], int n){
    float temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    
}
void sortDown(float arr[], int n){
    float temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]>arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
}
int main(){
    int n; printf("Nhap so luong phan tu: "); scanf("%d", &n);
    float arr[n];
    enterArr(arr, n);
    printf("\nMang vua nhap la: "); printArr(arr,n);
    printf("\nMang tang dan: "); sortUp(arr, n); printArr(arr, n);
    printf("\nMang giam dan: "); sortDown(arr, n); printArr(arr, n);
    return 0;
}