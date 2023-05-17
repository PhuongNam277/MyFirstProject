#include "stdio.h"
// void nhap(int x[100], int &n){
// 	printf("n = "); scanf("%d",&n);
// 	for(int i = 0; i<n; i++){
// 		printf("x[%d] = ", i+1); scanf("%d",&x[i]);
// 	}
// }
// void uoc(int x[100], int n){
//     int tong = 0;
//     for (int i = 0; i < x[i]; i++)
//     {
//         if (x[i]%i==0)
//         {
//             tong+=i;
//         }
//     }
//     printf("Tong = %d", tong);
//     for (int i = 0; i < n; i++)
//     {
//         if (tong < x[i])
//     {
//         printf("So ngheo nan");
//     }
//     else if (tong = x[i])
//     {
//         printf("So hoan hao");
//     }
//     else if(tong > x[i]){
//         printf("So phong phu");
//     } 
//     }
    
// }
int main(){
    int a[100], n;
    printf("n = "); scanf("%d",&n);
	for(int i = 0; i < n; i++){
		printf("a[%d] = ", i+1); scanf("%d",&a[i]);
	}
    printf("\n Day so vua nhap la: "); 
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    
    int tong = 0;
    for (int i = 1; i < (a[i]/2); i++)
    {
        if (a[i]%i==0)
        {
            tong+=i;
        }
    
    printf("Tong = %d", tong);
    for (int i = 0; i < n; i++)
    {
        if (tong < a[i])
    {
        printf("\nSo ngheo nan");
    }
    else if (tong = a[i])
    {
        printf("\nSo hoan hao");
    }
    else if(tong > a[i]){
        printf("\nSo phong phu");
    } 
    }
    }


    // nhap(a,n);
    // uoc(a,n);
    return 0;
}