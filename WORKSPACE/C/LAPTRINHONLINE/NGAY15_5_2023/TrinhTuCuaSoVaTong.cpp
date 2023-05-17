#include "stdio.h"
int main()
{
    int m, n;
    FILE *f;
    f = fopen("TrinhTu.txt", "r");
    if (f == NULL)
    {
        printf("Khong doc duoc tep");
    }

    fscanf(f, "%d ", &m);
    fscanf(f, "%d\n", &n);

    if (m == 0 || n == 0)
    {
        return 0;
    }
    else
    {
        int tong = 0;
        for (int i = n; i <= m; i++)
        {
            printf("%d ", i);
            tong += i;
        }
        printf("Tong = %d", tong);
    }
}