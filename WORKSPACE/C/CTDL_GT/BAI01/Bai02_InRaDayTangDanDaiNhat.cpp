#include <stdio.h>

int main() {
    int arr[] = {2, 3, 5, 1, 6, 7, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_length = 1; // độ dài của dãy con liên tiếp tăng dần dài nhất
    int start_index = 0; // vị trí bắt đầu của dãy con liên tiếp tăng dần dài nhất
    int current_length = 1; // độ dài của dãy con liên tiếp tăng dần hiện tại
    int current_index = 0; // vị trí bắt đầu của dãy con liên tiếp tăng dần hiện tại

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i-1]) {
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;  // maxleng = 4;
                start_index = current_index; // start_index = 3;
            }
            current_length = 1; // Dat lai
            current_index = i; // current_index = 7;
        }
    }

    // xử lý trường hợp dãy con tăng dần có chiều dài bằng n
    if (current_length > max_length) {
        max_length = current_length;
        start_index = current_index;
    }

    printf("Day con lien tiep tang dan dai nhat la: ");
    for (int i = start_index; i < start_index + max_length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
