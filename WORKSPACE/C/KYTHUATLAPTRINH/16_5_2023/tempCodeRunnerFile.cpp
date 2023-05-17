#include "stdio.h"
#include "stdlib.h"
void nhapTuTep(float *a, float *b, int &n)
{
    FILE *f;

    f = fopen("bai1.txt", "r");

    if (f == NULL)
    {
        printf("Khong doc duoc tep");
        
    }

    fscanf(f, "%d\n", &n);

    a = (float *)malloc(sizeof(float) * n);
    b = (float *)malloc(sizeof(float) * n);
    printf("Day a : ");
    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%f ", &a[i]);
        printf("%.2f   ", a[i]);
    }
    printf("\n");
    printf("Day b : ");
    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%f ", &b[i]);
        printf("%.2f   ", b[i]);
    }
}

void tinhTong(float *a, float *b, int &n)
{
    FILE *f;

    f = fopen("bai1.txt", "r");

    if (f == NULL)
    {
        printf("Khong doc duoc tep");
    }

    fscanf(f, "%d\n", &n);

    a = (float *)malloc(sizeof(float) * n);
    b = (float *)malloc(sizeof(float) * n);
    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%f ", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%f ", &b[i]);
    }

    int s = 0;

    for (int i = 0; i < n; i++)
    {
        s = s + (1 + (i + 1) * a[i] + (i + 1) * b[i]);
    }

    float q = (float)2023 / s;

    printf("\nq = %.2f", q);
}
int main()
{
    int n;
    float *a, *b;
    nhapTuTep(a, b, n);
    tinhTong(a, b, n);
}