#include "stdio.h"
#include "stdlib.h"
int main(){
    int n; 
    int *p;
    p = (int*) malloc(100 * sizeof(int));
    printf("Nhap n = "); scanf("%d", &n);
    for (int i = 0; i < n ; i++)
    {
        printf("x[%d] = ", i+1);
        scanf("%d", p+i);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(p+i));
    }
    
    
}