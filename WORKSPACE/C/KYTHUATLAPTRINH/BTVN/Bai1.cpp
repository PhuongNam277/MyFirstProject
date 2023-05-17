#include "stdio.h"
#include "stdlib.h"
#include "math.h"
double dienTich(double r){
    return r*r*3.14;
}
double dienTich(double cd, double cr){
    return cd*cr;
}
double dienTich(double a, double b, double c){
    double heron = (a+b+c)/2;
    return sqrt(heron*(heron-a)*(heron-b)*(heron-c));
}
int main(){
    int chon;
    do
    {
        printf("MENU: \n");
        printf("1. Tinh dien tich hinh tron\n");
        printf("2. Tinh dien tich hinh chu nhat\n");
        printf("3. Tinh dien tich hinh tam giac\n");
        printf("0. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d",&chon);
        switch (chon)
        {
        case 1:
            double r; printf("\nNhap ban kinh: "); scanf("%lf",&r);
            
            printf("\nS = %.2f\n", dienTich(r));
            break;
        case 2:
            double cd, cr; printf("\nNhap chieu dai va chieu rong: ");
            scanf("%lf%lf",&cd,&cr);
            printf("\nS = %.2f\n", dienTich(cd,cr));
            break;
        case 3:
            double a,b,c; printf("\nNhap ba canh a, b, c: ");
            scanf("%lf%lf%lf",&a,&b,&c);
            printf("\nS = %.2f\n", dienTich(a,b,c));
            break;    
        default:
            break;
        }
    } while (chon!=0);
    
    
}