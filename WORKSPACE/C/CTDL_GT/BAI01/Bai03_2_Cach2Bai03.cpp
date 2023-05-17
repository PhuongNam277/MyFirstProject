#include <stdio.h>

int main() {
   int n;
   printf("Nhap so phan tu cua day so: ");
   scanf("%d", &n);

   int a[n];
   printf("Nhap day so: ");
   for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
   }

   int max1 = -1000000, max2 = -1000000, max3 = -1000000;
   for (int i = 0; i < n; i++) {
      if (a[i] < 0) {
         if (a[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = a[i];
         } else if (a[i] > max2) {
            max3 = max2;
            max2 = a[i];
         } else if (a[i] > max3) {
            max3 = a[i];
         }
      }
   }

   if (max1 == -1000000 && max2 == -1000000 && max3 == -1000000) {
      printf("Khong co so am trong day so");
   } else {
      printf("3 so am lon nhat trong day so la: %d, %d, %d", max1, max2, max3);
   }

   return 0;
}
