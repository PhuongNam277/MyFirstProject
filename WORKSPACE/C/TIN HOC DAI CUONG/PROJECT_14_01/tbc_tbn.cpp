#include "stdio.h"
#include "math.h"
int main(){
    float tong = 0, tich = 1, a[100]; int n;
    printf("n = "); scanf("%d",&n); int dem = 0;
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i+1);
        scanf("%f",&a[i]);
        tong += a[i]; tich *= a[i]; dem++;
    }
    float tbc = (float)tong/dem;
    float tbn = (float)pow(tich, (float)1/dem);
    printf("TBC = %.2f", tbc); printf("\nTBN = %.2f", tbn);
    
}