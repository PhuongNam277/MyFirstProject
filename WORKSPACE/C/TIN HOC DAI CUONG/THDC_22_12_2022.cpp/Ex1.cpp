#include  "stdio.h"
#include "math.h"
int main(){
    float x[100], y[100]; int n;
    float kc[100];
    float maxX, maxY;
    printf("Nhap so diem: ");
    scanf("%d", &n);
    for (int i = 1; i <= n ; i++)
    {
        printf("Nhap x[%d] va y[%d]= ", i, i);
        scanf("%f%f", &x[i], &y[i]);
        kc[i] = sqrt(pow(x[i],2) + pow(y[i],2)); 
        
    }
    float max = kc[1];
    printf("Cac diem xa goc toa do nhat la: \n");
    for (int i = 1; i <= n ; i++)
    {
        if(kc[i]>max){
            max = kc[i];
            
        }
        if(kc[i]==max){
            printf("%.2f,%.2f", x[i], y[i]);
            printf("\n");
        }
        maxX=x[i]; maxY=y[i];
    }
    printf("Khoang cach max is: %.2f", sqrt(pow(maxX,2)+pow(maxY,2))); 
}