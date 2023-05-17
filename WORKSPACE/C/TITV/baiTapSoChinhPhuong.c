#include "stdio.h"
#include "math.h"
int SCP (int x) //tạo hàm
{
    float kc = sqrt(x);
    if(pow(kc,2)==x) return 1;
    else return 0;
}
int main ()
{
    int n;
    do
    {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n<=0);
    printf("Cac so chinh phuong la : \n");
    for (int i = 1; i <=n; i++) // gọi hàm
    {
        if(SCP(i)==1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
    
}