#include "stdio.h"
#include "stdlib.h"
int main(){
    int m, n; float **a;
    printf("Nhap m: "); scanf("%d", &m);
    printf("Nhap n: "); scanf("%d", &n);

    a = (float**) malloc (sizeof(float)*m*n);
    for (int i = 0; i < m; i++)
    {
        a[i] = (float*)malloc(sizeof(float)*n);
        for (int j = 0; j < n; j++)
        {
            printf("x[%d][%d] = ", i+1, j+1); scanf("%f", (a+i*n+j));

        }
        
    }
    printf("\nMTVN: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.1f  ", *(a+i*n+j));
        }
        printf("\n");
    }
    
}