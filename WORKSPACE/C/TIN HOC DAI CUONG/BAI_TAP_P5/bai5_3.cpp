#include "stdio.h"
int nhapDaySN(int x[100], int &n){
    printf("Nhap n = "); scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i+1); scanf("%d",&x[i]);
    }
    return 0;
}
int GTLN(int x[100], int n){
    int max = x[0];
    for (int i = 0; i < n; i++)
    {
        if (x[i]> max)
        {
            max = x[i];
        }
    }
    return max; 
}
int main(){
    int a[100], b[100], c[100], n;
    printf("Nhap day 1: "); nhapDaySN(a,n); GTLN(a,n);
    printf("Nhap day 2: "); nhapDaySN(b,n); GTLN(b,n);
    printf("Nhap day 3: "); nhapDaySN(c,n); GTLN(c,n);
    int max1 = GTLN(a,n);
    int max2 = GTLN(b,n);
    int max3 = GTLN(c,n); printf("Smax = %d", max1+max2+max3);
    
    
}