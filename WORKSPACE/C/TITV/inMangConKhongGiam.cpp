#include "stdio.h"
int a[100], n;
void nhapMang(int x[100], int &n){
	do {
		printf("Nhap vao so luong phan tu: ");
		scanf("%d", &n);
	}while(n<1);
	for(int i=0; i<n; i++){
		printf("Nhap x[%d]:", i);
		scanf("%d", &x[i]);
	}
}

void xuatMang(int x[100], int n){
	printf("\n");
	printf("Gia tri cua mang la: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
int timMax(int x[100],int n){
    int max = x[0];
    for (int i = 0; i < n; i++)
    {
        if(x[i]> max){
            max = x[i];
        }
    }
    return max;
}
// 1 2 3 6 5
// 1 1 1 1 1
// 4 3 2 1 1
void inMangCon(int x[100], int n){
    int b[100];
    for (int i = 0; i < n; i++)
    {
        b[i]=1;
    }

    for (int i = n-1; i > 0; i--)
    {
        if(x[i]>=x[i-1]){
            b[i-1]=b[i]+1;
        }
    }
    xuatMang(b,n);

    int soLuong = timMax(b,n);
    for (int i = 0; i < n; i++)
    {
        if(b[i]==soLuong){
            printf("\n");
            for (int j =i; j < i+soLuong; j++)
            {
                printf("%d ",x[j]);
            }
            
        }
    }
    
    




    
    
}
int main() {
    nhapMang(a,n);
    xuatMang(a,n);
    inMangCon(a,n);
}