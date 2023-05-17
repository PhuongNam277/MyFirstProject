#include "stdio.h"
#include "stdlib.h"
int main(){
    FILE *f;
    f = fopen("Input1.txt", "r");
    if (f == NULL)
    {
        printf("Khong doc duoc file");
    }

    int n;

    fscanf(f, "%d\n", &n);
    printf("n = %d\n", n);
    float a[n];

    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%f ", &a[i]);
    }
    
    fclose(f);
    // Ghi vao tep nhi phan

    FILE *fp;

    fp = fopen("thuc.bin", "wb");

    if (fp == NULL)
    {
        printf("Khong doc duoc file nhi phan");
    }
    fwrite(&n, sizeof(int), 1, fp);

    for (int i = 0; i < n; i++)
    {
        fwrite(&a[i], sizeof(double), 1, fp);
    }
    

    fp = fopen("thuc.bin", "rb");

    if (fp == NULL)
    {
        printf("Khong doc duoc file nhi phan");
    }

    fread(&n, sizeof(int), 1, fp);

    fread(a, sizeof(double), n, fp);
    
    for (int i = 0; i < n; i++)
    {
        printf("%.1f  ", a[i]);
    }
}