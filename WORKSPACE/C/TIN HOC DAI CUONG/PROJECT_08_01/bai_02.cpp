#include "stdio.h"
int main(){
    int n, a[100];
    scanf("%d",&n); int dem3 =0; int dem4 =0;
    for(int i = 0; i<n;i++){
        scanf("%d",&a[i]);
    }
    int max = a[0]; int dem2=0;
    int dem1 =0;
    int min = a[0]; 
    for(int i=0; i<n;i++){
        if(a[i]<min){
            min = a[i];
            dem1++;
        }
    }
    printf("Min = %d", min);
    for(int i=0; i<n;i++){
        if(a[i]=min){
            dem3++;
        }
    }
    
    for(int i=0; i<n;i++){
        if(a[i]>max){
            printf("%d", a[i]);
            max = a[i];
            dem2++;
        }
    }printf("max = %d", max);
    for(int i = 0; i<n;i++){
        if(a[i]=max){
            dem4++;
        }
    }
    int dem = dem1 + dem2 + dem3 +dem4;
    printf("\n");
    return 0;
}