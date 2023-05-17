#include "stdio.h"
#include"math.h"
int a[100]; int n;
void nhapMang(int x[100], int &n){
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
}
void xuatMang(int x[100], int n){
	printf("\n");
	printf("Gia tri cua mang la: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
    // 1 3 12 9 6 4 8
/*void tbcSoLeVTChan(int x[100], int n){
   int tong = 0; int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            if(x[i]%2!=0){
                tong += x[i];
                dem++;
            }
        }
    }
    float tbc1;
    tbc1 = tong / dem;

    printf("Trung binh cong so le vi tri chan = %.2f", tbc1);
}*/

/*void soMax(int x[100], int n){
 int  max = x[0];
    for (int i = 1; i < n; i++)
    {
        if(x[i] > max){
            max = x[i];
        }
    }

    printf("So max la : %d", max);
    
}*/

/*void VTSNN(int x[100], int n){
    // 99 88 77 55 66 85
    int vitri;
    int  min = x[0];
    for (int i = 1; i < n; i++)
    {
        if(x[i] < min){
            min = x[i];
            vitri = i;
        }
    }
    printf("Vi tri nho nhat la : %d", vitri);
}*/

/*void square_number_count(int x[100], int n){
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if(sqrt(x[i])==(int) sqrt(x[i])){
            dem++;
        }
    }
    printf("Co %d so chinh phuong!", dem);

}*/

/*void print_prime_number(int x[100], int n){
    printf("Cac so nguyen to la: ");
    int j;
    for (int i = 0; i < n; i++)
    {   //1 9 15 11 7 5
        j = sqrt(x[i]);
        if( x[i] % j != 0){
            printf("%d ", x[i]);
        }
    }
    
}*/

/*void replace_negative_element(int x[100], int n){
    for (int i = 0; i < n; i++)
    {
        if(x[i]<0){
            x[i]=0;
        }
    }
}
*/

int delete_element(int x[100], int &n){
    // 1 -2 3 -4 5 //1 3 -4
    // 1 3 5
    for (int i = 0; i < n; i++)
    {
            for (int j = i; j < n-1; j++)
            {
                x[j]=x[j+1];
            }
        }
          n--;
    }
    
    
int main(){
    nhapMang(a,n);
    //tbcSoLeVTChan(a,n);
    //soMax(a,n);
    //VTSNN(a,n);
    //square_number_count(a,n);
    //print_prime_number(a,n);
    /*replace_negative_element(a,n);
    xuatMang(a,n);*/
    delete_negative_element(a,n);
    xuatMang(a,n);
    
}