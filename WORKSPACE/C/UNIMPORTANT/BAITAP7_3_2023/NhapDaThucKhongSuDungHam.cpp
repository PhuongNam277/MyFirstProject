#include "stdio.h"
int main(){
    int n,m,k;
    float heSoP[100], heSoQ[100], heSoR[100];

    //Da thuc P
    printf("Nhap bac da thuc P: "); scanf("%d",&n);
    printf("Nhap bac da thuc Q: "); scanf("%d",&m);
    printf("Nhap bac da thuc R: "); scanf("%d",&k);
    printf("\n");
    for (int i = 0; i <= n; i++)
    {
        printf("Nhap he so thu %d cua P: ", i+1);
        scanf("%f",&heSoP[i]);
    }
    printf("\n\n");
    for (int i = 0; i <= m; i++)
    {
        printf("Nhap he so thu %d cua Q: ", i+1);
        scanf("%f",&heSoQ[i]);
    }
    printf("\n\n");
    for (int i = 0; i <= k; i++)
    {
        printf("Nhap he so thu %d cua R: ", i+1);
        scanf("%f",&heSoR[i]);
    }
    printf("Da thuc P vua nhap: ");
    for (int i = 0; i <= n; i++)
    {
        printf("%.2fx^%d +", heSoP[i], n-i);
    }
        printf(" 0");
    

    //Da thuc Q
    

    printf("\nDa thuc Q vua nhap: ");
    for (int i = 0; i <= m; i++)
    {
        printf("%.2fx^%d +", heSoQ[i], m-i);
    }
        printf(" 0");

    //Da thuc R
    

    printf("\nDa thuc R vua nhap: ");
    for (int i = 0; i <= k; i++)
    {
        printf("%.2fx^%d +", heSoR[i], k-i);
    }
        printf(" 0");
    
    
}