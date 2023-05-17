#include "stdio.h"
    int tong = 0;
    float tongTBCSD = 0;
    int soLuongSoDuong = 0;
    float trungBinhCong(int x[], int n ) //khai báo mảng 1 chiều
    {
        for (int i = 0; i < n; i++)
        {
            tong = tong + x[i];
        }
        return (float) tong /n;
    }

    float trungBinhCongSoDuong(int x[], int n ) //khai báo mảng 1 chiều
    {
        for (int i = 0; i < n; i++)
        {
            if (x[i]>0)
            {
                tongTBCSD += x[i];
                soLuongSoDuong++;
            }
            
        }
        return soLuongSoDuong>0?(float)tongTBCSD/soLuongSoDuong:-99999 ; //số lượng số dương phải lớn hơn 0 thì ta mới nên tính tbcsd
    }

int main ()
{
    int n;
    int a[100];
    do
    {
        printf("Nhap so luong phan tu can tinh trung binh cong (0<n<=100) : ");
        scanf("%d",&n);
    } while (n<0 || n>100);

    for (int i = 0; i < n; i++)
    {
        printf("\n a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Trung binh cong = %.2f", trungBinhCong(a,n));

   float tbcsd = trungBinhCongSoDuong(a,n); //phải gọi hàm lại mới ok được
   if (tbcsd>0)
   {
    printf("\nTrung binh cong so duong = %.2f", tbcsd);
   }
   else{
    printf("\nKhong co so duong!!!");
   }
   
}