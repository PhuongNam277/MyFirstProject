#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int main()
{
    int *random_number, n;
    printf("Nhap so nguyen ngau nhien can sap xep: ");
    scanf("%d", &n);
    random_number = (int *)malloc(sizeof(int) * n);
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        *(random_number + i) = rand() % 100 + 1;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(random_number + j) < *(random_number + i))
            {
                int tam = *(random_number + i);
                *(random_number + i) = *(random_number + j);
                *(random_number + j) = tam;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", *(random_number + i));
    }
    free(random_number);
    return 0;
}