#include "stdio.h"
#include "stdlib.h"
int jumpSearch(int a[], int n, int k)
{
    int d = 3; // bước nhảy d = 3
    int i = 0;
    int j = i + d;

    while (j < n && a[j] < k) // k là số cho trước
    {
        i += d;
        j += d;
    }

    if (j >= n)
    {
        j = n - 1;
    }

    while (a[i] < k)
    {
        i = i + 1;
        if (i >= n || i > j)
        {
            return -1;
        }
    }

    if (a[i] == k)
    {
        return i;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int a[100], n, k;

    FILE *f;
    f = fopen("Input.txt", "r");

    if (f == NULL)
    {
        printf("\nLoi doc file!");
        exit(1);
    }

    fscanf(f, "%d ", &n);

    fscanf(f, "%d", &k);

    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%d ", &a[i]);
    }

    fclose(f);

    printf("\nVi tri cua k la: %d", jumpSearch(a, n, k));

    return 0;
}