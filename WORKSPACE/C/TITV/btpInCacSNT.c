#include "stdio.h"
#include "math.h"
int checkPrimeNumber(int x)
{
    if(x<=1) return 0;
    for (int i = 2; i <= sqrt(x) ; i++)
    {
        if(x%i==0) return 0;
    }
    return 1;
}

int main ()
{
    int n;
    do
    {
        printf("Nhap so n= ");
        scanf ("%d", &n);
    } while (n<=1);

    printf("Cac so nguyen to la :  \n");
    for (int j = 2; j <=n ; j++)
    {
            if (checkPrimeNumber(j))
        {
            printf("%d \n",j);
        }
    }
    return 0;
}