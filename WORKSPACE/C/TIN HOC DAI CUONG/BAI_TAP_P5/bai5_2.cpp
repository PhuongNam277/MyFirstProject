#include "stdio.h"
bool KTNamNhuan(int n){
    bool kq = false;
    if(n%400==0||n%4==0&&n%100!=0){
        kq = true;
    }
    return kq;
}
int main(){
    int ngay, thang, nam;
    do
    {
        printf("Nhap ngay: "); scanf("%d", &ngay);
        printf("Nhap thang: "); scanf("%d", &thang);
        printf("Nhap nam: "); scanf("%d", &nam);

    } while (ngay>31||ngay<1||thang>12||thang<1||nam<0);
    if (thang==2&&KTNamNhuan(nam)==false)
    {
        if(ngay>28)
        {
            printf("ERROR");
        }else{
            printf("HL");
        }
    }
    else if (thang==4||thang==6||thang==9||thang==11)
    {
        if(ngay>30){
            printf("ERROR");
        }else printf("HL");
    }
    else{
        printf("HL");
    }
    return 0;
}