#include "stdio.h"
#include "limits.h" // hàm này để trả về giá trị của các kiểu dữ liệu
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
int soMinThu2(int x[100], int n){
    int min = INT_MAX;
    int min_2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(x[i]< min){
            min = x[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(x[i]==min){
            continue;
        }else{
            if(x[i]<min_2){
                min_2=x[i];
            }
        }
    }
    return min_2;
    
}

int soMaxThu2(int x[100], int n){
    int max = INT_MIN;
    int max_2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(x[i]> max){
            max = x[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(x[i]==max){
            continue;
        }else{
            if(x[i]>max_2){
                max_2=x[i];
            }
        }
    }
    return max_2;
    
}

int main(){
    nhapMang(a,n);
    xuatMang(a,n);
    printf("\n");
    printf("So be thu 2 la: %d", soMinThu2(a,n));
    printf("\nSo lon thu 2 la: %d", soMaxThu2(a,n));
}