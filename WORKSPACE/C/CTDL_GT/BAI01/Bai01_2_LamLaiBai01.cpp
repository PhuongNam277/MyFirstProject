#include "stdio.h"
int main(){
    int n, tanSuat[100], dem, x[100];
    printf("Nhap so luong phan tu: "); scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i+1); scanf("%d", &x[i]);
        tanSuat[i] = -1;
    }
    
    for (int i = 0; i < n; i++)
    {
        dem = 1;
        for (int j = i+1; j < n; j++)
        {
            if (x[i]==x[j])
            {
                tanSuat[j] = 0;
                dem++;
            }
            
        }
        
        if (tanSuat[i] != 0)
        {
            tanSuat[i] = dem;
        }
        
    }
    int maxTanSuat = 0, result;
    for (int i = 0; i < n; i++)
    {
        if (tanSuat[i] != 0)
        {
            if (tanSuat[i] > maxTanSuat)
            {
                maxTanSuat = tanSuat[i];
                result = x[i];
            }
            
        }
        
    }
    
    printf("\nSo xuat hien nhieu nhat la so %d", result);

    return 0;

}