#include "stdio.h"
int main(){
    int n, x[100];
    int tanSuat[100];
    printf("Nhap so luong phan tu: "); scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i+1); scanf("%d", &x[i]);
        tanSuat[i] = -1;

    }
    
    int dem;

    for (int i = 0; i < n; i++)
    {
       dem = 1; 
       
        for (int j = i+1; j < n; j++)
        {
            if (x[i]==x[j])
            {
                dem++;
                tanSuat[j] = 0;
            }
            
        }
        
        if (tanSuat[i] != 0)
        {
            tanSuat[i] = dem;
        }
        
    }
    int tanSuatMax = 0, result;
    for (int i = 0; i < n; i++)
    {
        if (tanSuat[i] != 0)
        {
            
            printf("\nSo lan xuat hien so %d la %d", x[i], tanSuat[i]);
            if (tanSuat[i] > tanSuatMax)
            {
                tanSuatMax = tanSuat[i];
                result = x[i];
            }
        }
    }
    printf("\nSo xuat hien nhieu nhat trong day la so %d", result);
    return 0;
}