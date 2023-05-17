#include "stdio.h"
int a[100],n;
void nhapMang(int x[100],int &n){
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ",i);
        scanf("%d", &x[i]);
    }
}
void sapXep(int x[100], int n){
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(x[i]>x[j]){
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
        
    }
}
void xuatMang(int x[100], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", x[i]);
    }
    
}
int main(){
    nhapMang(a,n);
    sapXep(a,n);
    xuatMang(a,n);
}