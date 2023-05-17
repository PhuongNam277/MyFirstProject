#include "stdio.h"
#include "string.h"
void xoaXuongDong(char x[]){
    size_t len = strlen(x);
    if(x[len-1]=='\n') x[len-1]='\0';
}
struct diemDH
    {
        float toan, ly, hoa;
    };
struct thiSinh
{
    char hoTen[100];
    char que[30];
    diemDH dh;
    float diem;
};
void nhapDanhSach(thiSinh &ts){
    printf("Nhap ten: "); fflush(stdin); fgets(ts.hoTen, sizeof(ts.hoTen), stdin); xoaXuongDong(ts.hoTen);
    printf("Nhap que: "); fflush(stdin); fgets(ts.que, sizeof(ts.que), stdin); xoaXuongDong(ts.que);
    printf("Nhap diem thi 3 mon Toan, Ly, Hoa: ");
    scanf("%f%f%f", &ts.dh.toan,&ts.dh.ly,&ts.dh.hoa);
}
void xuatDanhSach(thiSinh ts){
    printf("%s  %s  %.2f  %.2f  %.2f", ts.hoTen,ts.que,ts.dh.toan,ts.dh.ly,ts.dh.hoa);
}
void nhapNhieuDanhSach(thiSinh ds[], int &n){
    do
    {
        printf("Nhap so luong sinh vien: "); scanf("%d",&n);
    } while (n<=0);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap thong tin sinh vien thu %d: ",i+1);
        nhapDanhSach(ds[i]);
    }
}

void xuatNhieuDanhSach(thiSinh ds[], int n){
    for (int i = 0; i < n; i++)
    {
        xuatDanhSach(ds[i]);
        printf("\n");
    }
}
void tsdoDaiHocTinh(thiSinh ds[], int n){
    float diemChuan;
    printf("Nhap diem chuan: "); scanf("%f", &diemChuan);
    char queQuan[30]; printf("Nhap tinh can in ds: ");fflush(stdin); fgets(queQuan, sizeof(queQuan), stdin); xoaXuongDong(queQuan);
    printf("Danh sach sinh vien do dai hoc tinh %s la: \n" ,queQuan);
    for (int i = 0; i < n; i++)
    {
        if(ds[i].dh.toan+ds[i].dh.ly+ds[i].dh.hoa>diemChuan&&strcmp(ds[i].que, queQuan)==0){
            xuatDanhSach(ds[i]);
            printf("\n");
        }
    }
}
int main(){
    thiSinh ds[100]; int n;
    nhapNhieuDanhSach(ds,n);
    xuatNhieuDanhSach(ds,n);
    tsdoDaiHocTinh(ds,n);
    
    
}
