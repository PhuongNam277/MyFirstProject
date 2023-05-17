#include "stdio.h"
int main(){
    int m,n, flag, flag2;
    do
    {
        printf("Nhap so luong phan tu day so a: "); scanf("%d", &m);
    } while (m<0&&m>100);
    float a[m];
    for (int i = 0; i < m; i++)
    {
        printf("a[%d] = ", i+1); scanf("%f", &a[i]);
    }
    do
    {
        printf("Nhap so luong phan tu day so b: "); scanf("%d", &n);
    } while (n<0&&n>100);
    float b[n];
    for (int i = 0; i < n; i++)
    {
        printf("b[%d] = ", i+1); scanf("%f", &b[i]);
    }
    printf("\nNhung phan tu chi xuat hien o a ma khong xuat hien o b la: ");
    for (int i = 0; i < m; i++)
    {
        flag = 0;
        for (int j = 0; j < n; j++)
        {
           if (a[i]==b[j])
           {
                flag = 1; break;
           }
            
        }
        if (flag == 0)
        {
            printf("%.1f  ", a[i]);
        }
        
    }
    printf("\nNhung phan tu xuat hien o ca hai day la: ");
    for (int i = 0; i < m; i++)
    {
        flag2 = 0;
        for (int j = 0; j < n; j++)
        {
           if (a[i]==b[j]) // 1 2 3 4 5
           {
                printf("%.1f  ", a[i]); break; // 1 2 4 5 6
           }
        }
    }
}