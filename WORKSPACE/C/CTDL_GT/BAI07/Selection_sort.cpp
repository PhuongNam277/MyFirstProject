#include "stdio.h"
void selection_sort(int n, int a[]) // Thuật toán selection_sort
{
    int i_min, v_min;
    for (int i = 0; i < n - 1; i++)
    {
        i_min = i;
        v_min = a[i];

        for (int j = i; j < n; j++)
        {
            if (a[j] < v_min)
            {
                v_min = a[j];
                i_min = j;
            }
        }
        int temp = a[i];
        a[i] = a[i_min];
        a[i_min] = temp;
    }
}
int main()
{
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i + 1);
        scanf("%d", &a[i]);
    }

    selection_sort(n, a);
    printf("\nDay so sau khi sap xep: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}
