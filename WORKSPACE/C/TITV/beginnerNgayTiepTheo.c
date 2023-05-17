#include "stdio.h"
int main()
{
    int ngay,thang,nam;
    do
    {
       printf("Nhap vao ngay thang nam: ");
        scanf("%d%d%d",&ngay,&thang,&nam);
    } while (ngay>31||ngay<1);
     if(ngay!=31&&thang!=2)
     {
        ngay++;
        printf("Ngay ke tiep: %d/%d/%d", ngay,thang,nam );
     }
     else if (ngay==31&&thang==12)
     {
        nam++;
        printf("Ngay ke tiep : 1/1/%d", nam);
     }
     else if  (thang==2&&nam%4==0||nam%400==0)
     {
        if(ngay==29)
        {
            
            printf("Ngay ke tiep: 1/3/%d",nam);
        }
        else
        {
            ngay++;
            printf("Ngay ke tiep:%d/2/%d",ngay,nam);

        }
     }
     else if  (thang==2&&nam%4!=0||nam%400!=0)
     {
        if(ngay==28)
        {
            
            printf("Ngay ke tiep: 1/3/%d",nam);
        }
        else if (ngay==29)
        {
            printf("Loi he thong!!");
        }
        
        else
        {
            ngay++;
            printf("Ngay ke tiep:%d/2/%d",ngay,nam);

        }
     }
     

    
}