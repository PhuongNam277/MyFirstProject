#include "stdio.h"
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        // Duyệt qua các phần tử từ 0 đến n-i-1
        for (j = 0; j < n-i-1; j++) {
            // Nếu phần tử thứ j lớn hơn phần tử thứ j+1
            if (arr[j] > arr[j+1]) {
                // Hoán đổi chúng
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void nhapFile(int arr[], int &n){
    FILE *f;
    f = fopen("ARRAY.INP", "w");
    if (f == NULL)
    {
        printf("\nKhong ghi duoc file");
        return;
    }
    fprintf(f, "%d\n", n);

    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%d  ", arr[i]);
    }
}
void nhapFile2(int arr[], int &n){
    FILE *f;
    f = fopen("ARRAY.OUT", "w");
    if (f == NULL)
    {
        printf("\nKhong ghi duoc file");
        return;
    }
    fprintf(f, "%d\n", n);

    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%d  ", arr[i]);
    }
}
int main(){
    int arr[100]; int n;

    do
    {
        printf("Nhap so luong phan tu: "); scanf("%d", &n);
    } while (n>100 || n<0);

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i+1); scanf("%d", &arr[i]);
    }
    nhapFile(arr, n);
    bubbleSort(arr, n);
    nhapFile2(arr, n);
}