#include "stdio.h"
int main()
{
    int n;
    Nhap :
        printf("Nhap so n > 0 : ");
        scanf("%d", &n);
    if(n < 0) goto Nhap; // nếu sai sẽ lặp lại mãi cho tới khi đúng
    printf("Cac so chan : \n");
    for (int i = 1; i <= n; i++)
    {
        if (i%2==1) continue; // bỏ qua các số lẻ
        {
            printf(" %d \n", i);
        }
        
    }
    return 0;

}