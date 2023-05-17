#include "bits/stdc++.h"

void insertion_sort(int *a, int n)
{
    FILE *result;
    int j;

    // 2 4 5 6 9

    for (int i = 1; i < n; i++)
    {
        j = i;
        int temp;
        while (j > 0 && a[j] <= a[j - 1])
        {
            temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
            j--;
        }
    }

    result = fopen("result.txt", "w");

    for (int i = 0; i < n; i++)
    {
        fprintf(result, "%d ", a[i]);
    }
}

int main()
{
    int n, *a;
    char tenFile[50];
    printf("\nNhap ten file: ");
    gets(tenFile);
    FILE *f;
    f = fopen(tenFile, "r");
    if (f == NULL)
    {
        printf("Khong doc duoc file!");
    }

    fscanf(f, "%d\n", &n);
    a = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%d ", &a[i]);
    }
    fclose(f);
    insertion_sort(a, n);
}