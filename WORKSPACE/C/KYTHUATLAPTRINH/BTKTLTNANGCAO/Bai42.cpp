#include "stdio.h"
int check(int so, int dem){
    dem = 0;
    for (int i = 1; i <= so; i++)
    {
        if (so%i==0)
        {
            dem++;
        }
    }
    if (dem<3)
    {
        return 0;
    }
    else{
        dem = 0;
        return 1;
    }
    
}
int main(){
    int n; printf("Nhap so phan tu nguyen: "); scanf("%d", &n);
    int x[n+1]; int dem;
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i+1); scanf("%d", &x[i]);
    }
    printf("\nCac so co tu 3 uoc tro len la: ");
    for (int i = 0; i < n; i++)
    {
        if (check(x[i], dem))
        {
            printf("%d  ", x[i]);
        }
        
    }
    
}