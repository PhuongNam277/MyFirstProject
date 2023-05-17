#include "stdio.h"
int a[100], n;
void nhapMang(int x[100], int &n){
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
}
void xuatMang(int x[100], int n){
	printf("Gia tri cua mang la: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}

/*void xoaMang(int x[100], int &n, int vitri){
    //1 2 3 4 5
    // 1 3 4 5
    for (int i = vitri; i < n-1; i++)
    {
        x[i]=x[i+1];
    }
    n--;
}
*/
void xoaMang(int x[100], int &n, int vitri){
    //1 2 3 4 5
    // 1 3 4 5
    for (int i = 0; i < n-1; i++)
    {
        x[i]=x[i+1];
    }
    n--;
}

void thucHienXoaMang(int x[100], int &n){
    int gt;
    printf("Nhap gia tri can xoa: ");
    scanf("%d", &gt);
    for (int i = 0; i < n; i++)
    {
        if(x[i]==gt){
            xoaMang(x,n,i);
        }
    }
    
}


int main()
{
    nhapMang(a,n);
    xuatMang(a,n);
    thucHienXoaMang(a,n);
    xuatMang(a,n);
}