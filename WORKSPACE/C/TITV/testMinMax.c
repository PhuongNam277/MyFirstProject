#include <stdio.h>
int main ()
{
    int a, b ,MIN, MAX;
    printf("Nhập số a : ");
    scanf("%d",&a);
    printf("Nhập số b : ");
    scanf("%d",&b);

    MAX = (a>b)?a:b;
    MIN = (a<b)?a:b;

    printf("MAX = %d\n", MAX);
    printf("MIN = %d", MIN);

    return 0;

}