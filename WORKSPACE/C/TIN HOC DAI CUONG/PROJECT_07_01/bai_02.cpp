#include "stdio.h"
int main(){
    int a[100],n;
    printf("Nhap n: "); scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]= ", i); scanf("%d",&a[i]);
    }
    int tongchan =0; int tongle = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            tongchan+=a[i];
        }
        else tongle+=a[i];
    }
    if(tongchan==tongle) printf("Tong chan = tong le");
    else printf("tong chan khac tong le");
    return 0;
    
}