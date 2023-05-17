#include <stdio.h>
#include <ctype.h>

void chuanHoaChuoi(char *str) {
    int i = 0, j = 0;

    // Loại bỏ các khoảng trắng ở đầu chuỗi
    while (isspace(str[i])) {
        i++;
    }

    // Loại bỏ các khoảng trắng dư thừa ở giữa chuỗi
    while (str[i]) {
        if (!isspace(str[i]) || (i > 0 && !isspace(str[i-1]))) {
            str[j] = str[i];
            j++;
        }
        i++;
    }

    // Loại bỏ các khoảng trắng ở cuối chuỗi
    if (j > 0 && isspace(str[j-1])) {
        j--;
    }

    // // Đưa tất cả các ký tự trong chuỗi về dạng chữ thường
    // for (i = 0; str[i]; i++) {
    //     str[i] = tolower(str[i]);
    // }

    // // Đưa ký tự đầu tiên của mỗi từ trong chuỗi về dạng chữ hoa
    // if (j > 0) {
    //     str[0] = toupper(str[0]);
    // }
    // for (i = 1; i < j; i++) {
    //     if (isspace(str[i-1])) {
    //         str[i] = toupper(str[i]);
    //     }
    // }
    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);

    chuanHoaChuoi(str);

    printf("Chuoi chuan hoa: %s\n", str);

    return 0;
}
