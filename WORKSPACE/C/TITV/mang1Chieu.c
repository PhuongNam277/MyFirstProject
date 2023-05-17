#include "stdio.h"
int main ()
{
    int soNguyen[3] =  {27, 7, 2004}; // khai báo mảng và truyền giá trị cho mảng
   
    // Lưu ý : vị trí của mảng bắt đầu từ số 0
    printf("Vi tri 0 : %d ", soNguyen[0]);
    printf("\nVi tri 1 : %d ", soNguyen[1]);
    printf("\nVi tri 2 : %d", soNguyen[2]);

    soNguyen[0] = 15;  //gán giá trị khác cho mảng
    soNguyen[1] = 3;
    soNguyen[2] = 2005;

    printf("\nVi tri 0 sau : %d", soNguyen[0]);
    printf("\nVi tri 1 sau :%d ", soNguyen[1]);
    printf("\nVi tri 2 sau :%d ", soNguyen[2]);

    return 0;
}