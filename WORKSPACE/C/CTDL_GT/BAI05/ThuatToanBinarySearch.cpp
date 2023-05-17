#include "stdio.h"
#include "stdlib.h"
int binarySearch(int *a, int k, int n){

    int left = 0, right = n, mid;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (a[mid] == k)
        {
            return mid;
        }
        
        else if (a[mid] < k)
        {
            left = mid + 1;
        }

        else right = mid - 1; 
    }
    
    return -1;
}
int main(){
    int n;

    int k;

    char tenFile[50];

    printf("\nNhap ten file: ");

    gets(tenFile);

    printf("\nNhap so K muon tim kiem: "); scanf("%d", &k);

    FILE *f;

    f = fopen(tenFile, "r");

    if (f == NULL)
    {
        printf("Khong the mo file!");
    }

    fscanf(f, "%d\n", &n);
    
    int *a;

    a = (int*) malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%d ", &a[i]);
    }
    
    free(a);

    printf("\nVi tri cua K la: %d", binarySearch(a, k, n));
    
    return 0;
}