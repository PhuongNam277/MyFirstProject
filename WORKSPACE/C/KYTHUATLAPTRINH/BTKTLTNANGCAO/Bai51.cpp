#include <stdio.h>

int main() {
  int ngay, thang, nam;
  int ngay_trong_thang[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  // Khai báo mảng chứa số ngày trong các tháng của năm không nhuận

  printf("Nhap ngay: ");
  scanf("%d", &ngay);
  printf("Nhap thang: ");
  scanf("%d", &thang);
  printf("Nhap nam: ");
  scanf("%d", &nam);

  // Kiểm tra năm nhuận và cập nhật số ngày trong tháng 2 nếu cần
  if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
    ngay_trong_thang[1] = 29;  // Năm nhuận, cập nhật số ngày trong tháng 2
  }

  // Kiểm tra tính hợp lệ của ngày tháng năm
  if (nam < 0 || thang < 1 || thang > 12 || ngay < 1 || ngay > ngay_trong_thang[thang-1]) {
    printf("Ngay thang nam khong hop le\n");
  } else {
    printf("Ngay thang nam hop le\n");
  }

  return 0;
}
