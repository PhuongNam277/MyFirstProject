#include "stdio.h"
void nhapMang(int arr[], int &n){
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i+1); scanf("%d", &arr[i]);
    }
}
void timViTri(int arr[],int n, int giaTrix){
    for (int i = n-1; i >=0 ; i--)
    {
        if (arr[i]==giaTrix)
        {
            printf("Vi tri can tim: %d", i+1);
            break;
        }
        
    }
    
}
int main(){
    int n; printf("Nhap so luong phan tu: "); scanf("%d", &n);
    int arr[n+1];
    nhapMang(arr, n);
    timViTri(arr, n, 9);
    return 0;
}