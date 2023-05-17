#include "stdio.h"

int soNgayTrongThang( int thang, int nam)
{
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2 :
        return ((nam %400==0 || nam % 4==0 && nam %100 != 0 ))?29:28; //đây là câu điều kiện theo 1 cách khác
    default:
        return -1;
    }
}
int ngayTrongNam(int ngay, int thang, int nam)
{
    int ntn = 0 ; 
    for (int i = 1; i < thang; i++)
    {
        ntn += soNgayTrongThang(i, nam);
    }
    ntn+=ngay;
    return ntn;
}
void ngayTruocDo(int ngay, int thang, int nam)
{
    if(ngay==1)
    {
        if(thang==1)
            {
                ngay=31;
                thang=12;
                nam--;
            }
        else
            {
                thang--;
            ngay=soNgayTrongThang(thang,nam);
            }

    }
    else
    {
        ngay--;
    }
    printf("\nNgay truoc do : %d/%d/%d ", ngay ,thang , nam);
}

void ngayKeTiep(int ngay, int thang, int nam)
{
    if(ngay==31)
    {
        if(thang==12)
            {
                ngay=1;
                thang=1;
                nam++;
            }
        else
            {
              ngay=1  ;
              thang++;
            }

    }
    else
    {
        ngay++;
    }
    printf("\nNgay ke tiep : %d/%d/%d ", ngay ,thang , nam);
}

int main ()
{
    int ngay, thang, nam;
    do
    {
        printf("Nhap ngay, thang, nam : ");
        scanf("%d%d%d", &ngay,&thang,&nam);
    } while (ngay < 1 || ngay > 31 || thang < 1 || thang > 12 || nam < 1);
    //câu a
    printf("So ngay trong thang : %d \n", soNgayTrongThang(thang, nam));
    //câu b
    printf("Ngay thu %d trong nam!", ngayTrongNam(ngay,thang,nam));
    //câu c
    ngayTruocDo(ngay,thang,nam);   //phải gọi hàm ra
    ngayKeTiep(ngay, thang, nam);
    return 0;
}