#include "stdio.h"
#include "stdlib.h"
int main(){
    int n;
    int *ptr;
    printf("Nhap so luong phan tu: ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ",i);
        scanf("%d",ptr+i);
    }
    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", *(ptr+i));
    }
    int x;
    printf("\nNhap so luong phan tu moi: ");
    scanf("%d",&x);
    realloc(ptr,x);
    for (int i = 0; i < x; i++)
    {
        printf("x[%d] = ",i);
        scanf("%d", ptr+i);
    }
    
    printf("Mang vua nhap la: ");
    for (int i = 0; i < x; i++)
    {
        printf("%d  ", *(ptr+i));
    }
    free(ptr);
}