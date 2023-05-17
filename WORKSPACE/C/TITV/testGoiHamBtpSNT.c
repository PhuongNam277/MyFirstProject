#include "stdio.h"
int checkPrimeNumber(int x) //tạo hàm
{
    if (x<=1) //các câu lệnh hoặc điều kiện trong hàm
        return 0;
    for (int i = 2; i <= x-1; i++) // bởi vì ở trên <=1 r nên sẽ bắt đầu từ 2
    {
        if (x%i == 0)
            return 0;
    }
    return 1;
    

}
    int main ()
    {
        int n;
        printf("Nhap so n de kiem tra SNT: ");
        scanf("%d", &n);
        int SNT = checkPrimeNumber(n); //gọi hàm
        if(SNT == 1)
        {
            printf("%d la so nguyen to!", n);
        }
        else
        {
            printf("%d khong phai la so nguyen to", n);
        }
        return 0;
    }