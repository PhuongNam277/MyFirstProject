#include "stdio.h"
#include "stdlib.h"
int main(){
	int n; printf("Nhap n: ");
	scanf("%d",&n);
	double *ptr;
	ptr = (double*) malloc(sizeof(double)*n);

    printf("Nhap cac phan tu: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%lf",&(*(ptr+i)));
    }

    printf("Cac phan tu vua nhap: ");
    for (int i = 0; i < n; i++)
    {
        printf("%.2lf  ", *(ptr+i));
    }
    
    free(ptr);
    return 0;
}