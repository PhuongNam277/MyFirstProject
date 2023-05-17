#include "stdio.h"
#include "math.h"
int main(){
    int n; float x[100], y[100]; printf("Nhap n:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap x%d, y%d: ",i+1,i+1); scanf("%f%f",&x[i],&y[i]);
    }
    printf("Cac diem vua nhap: \n");
    for (int i = 0; i < n; i++)
    {
        printf("(%.1f, %.1f) ",x[i],y[i]);
    }
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i]>0&&sqrt(pow(x[i],2)+pow(y[i],2))<7.5)
        {
            dem++;
        }
        
    }
    printf("\nCo %d diemm thoa man",dem);
}