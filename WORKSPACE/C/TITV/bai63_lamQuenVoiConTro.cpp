#include "stdio.h"
int main(){
    int *pt; // khai báo con trỏ
    int x = 1555;
    pt = &x; // gán con trỏ với giá trị
    printf("\n%d", *pt);
    printf("\n%p", *pt);
}