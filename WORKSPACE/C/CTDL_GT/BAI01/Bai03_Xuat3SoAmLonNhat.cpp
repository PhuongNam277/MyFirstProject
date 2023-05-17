#include "stdio.h"
int main(){
    int n, x[100], soAm[50], dem = 0;
    printf("Nhap so luong phan tu: "); scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i+1); scanf("%d", &x[i]);
        if (x[i] < 0)
        {
            soAm[dem] = x[i] ; dem++;
        }
        
    }
    
    printf("\nDay vua nhap: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }
    int temp;
    for (int i = 0; i < dem-1; i++)
    {
        for (int j = i+1; j < dem; j++)
        {
            if (soAm[i] < soAm[j])
            {
                temp = soAm[i];
                soAm[i] = soAm[j]; 
                soAm[j] = temp;
            }
            
        }
    }
    
    printf("\n3 so am lon nhat trong day la: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", soAm[i]);
    }
    
}