#include "stdio.h"
int main()
{
    int soBDN;
    do
    {
        printf("Nhap vao so banh da nem can ran: ");
        scanf("%d",&soBDN);
    } while (soBDN>10000||soBDN<1);
    int thuong;
    int sodu =0;
    int soLanRan = 0;
    thuong = soBDN/9;
    soLanRan+=thuong; 
    if (soBDN%9!=0)
    {
        sodu++;
    }
    soLanRan+=sodu;
    printf("So lan can ran la: %d ", soLanRan);
}