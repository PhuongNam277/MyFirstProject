#include "stdio.h"
int main(){
    char hvt[50];
    printf("Nhap ho va ten: ");
    fgets(hvt, sizeof(hvt), stdin);
    char nh[50];
    printf("Nhap nganh hoc cua ban: ");
    fgets(nh, sizeof(nh), stdin);
    char lop[10];
    printf("Nhap lop: ");
    scanf("%s", lop);
    char msv[10];
    printf("Nhap MSV: ");
    scanf("%s", msv);
    printf("---------------------------------------\n");
    printf("Ho va ten: %s", hvt);
    printf("Nganh : %s", nh);
    printf("Lop: %s\n", lop);
    printf("MSV: %s", msv);
}