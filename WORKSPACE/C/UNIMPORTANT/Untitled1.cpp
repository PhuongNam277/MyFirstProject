#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p;

    p = &arr[2]; // lấy địa chỉ của phần tử thứ 3 trong mảng

    printf("Gia tri cua phan tu thu 3 la: %d\n", *p);
    printf("Dia chi cua phan tu thu 3 la: %p\n", (void*)p);

    return 0;
}
