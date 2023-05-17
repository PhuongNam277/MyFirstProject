#include "stdio.h"
#include "string.h"
void xoaXuongDong(char x[]){
    size_t len = strlen(x);
    if(x[len-1]=='\n') x[len-1]='\0';
}
struct HocSinh
{
    char hvt[100];
    char queQuan[30];
    char truong[50];
    int sbd; int diem;
};
int main(){
    HocSinh hs[25];
    int n=3;
    for (int i = 0; i < n; i++)
    {
        printf("Nhap thong tin sinh vien thu %d: \n", i);
        printf("Nhap ten: "); fflush(stdin); fgets(hs[i].hvt, sizeof(hs[i].hvt), stdin); xoaXuongDong(hs[i].hvt);
        printf("Nhap que: "); fflush(stdin); fgets(hs[i].queQuan, sizeof(hs[i].queQuan), stdin); xoaXuongDong(hs[i].queQuan);
        printf("Nhap truong: "); fflush(stdin); fgets(hs[i].truong, sizeof(hs[i].truong), stdin); xoaXuongDong(hs[i].truong);
        printf("Nhap sbd: "); scanf("%d",&hs[i].sbd);
        printf("Nhap diem: "); scanf("%d",&hs[i].diem);
    }
    printf("Danh sach sinh vien vua nhap: "); printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s %s %s %d %d", hs[i].hvt, hs[i].queQuan, hs[i].truong, hs[i].sbd, hs[i].diem); printf("\n");
    }
    
    
}
