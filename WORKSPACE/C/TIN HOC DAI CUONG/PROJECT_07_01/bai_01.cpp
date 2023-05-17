#include "stdio.h"
int main(){
    int a[100],n;
    printf("Nhap n: "); scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]= ", i); scanf("%d",&a[i]);
    }
    int b; printf("Nhap b: "); scanf("%d",&b); bool kt = false;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==b){
            kt = true;
        }
    }
    if (kt==true)  printf("So hop le!");
    else   printf("ERROR");
}