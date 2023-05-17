#include "stdio.h"
#include "string.h"
void xoaXuongDong(char x[]){
    size_t len = strlen(x);
    if (x[len-1]=='\n')
    {
        x[len-1]='\0';
    }
    
}
struct NGAYTHANG
{
    int ngay, thang, nam;
};
struct SinhVien
{
    int maSinhVien; char hoTen[100]; NGAYTHANG ngayThangNamSinh; char gioiTinh[20]; char hoKhau[100]; float diemThiDaiHoc;

};

void nhapDanhSach(SinhVien sv[], int &n){
    printf("Nhap so luong sinh vien: "); scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap thong tin sinh vien thu %d: \n",i+1);
        printf("Nhap ma sinh vien: "); scanf("%d",&sv[i].maSinhVien);
        printf("Nhap ho ten: "); fflush(stdin);
        fgets(sv[i].hoTen, sizeof(sv[i].hoTen), stdin); xoaXuongDong(sv[i].hoTen);
        printf("Nhap ngay thang nam sinh: ");
        scanf("%d%d%d",&sv[i].ngayThangNamSinh.ngay, &sv[i].ngayThangNamSinh.thang, &sv[i].ngayThangNamSinh.nam);
        printf("Nhap gioi tinh: "); fflush(stdin);
        fgets(sv[i].gioiTinh, sizeof(sv[i].gioiTinh), stdin); xoaXuongDong(sv[i].gioiTinh);
        printf("Nhap ho khau thuong tru: "); fflush(stdin);
        fgets(sv[i].hoKhau, sizeof(sv[i].hoKhau), stdin); xoaXuongDong(sv[i].hoKhau);
        printf("Nhap diem thi dai hoc: "); scanf("%f",&sv[i].diemThiDaiHoc);
    }
    
}

void xuatDanhSach(SinhVien sv[], int n){
    printf("\nMSV\tHo ten\t\t\tNgay sinh\tGioi tinh\tHo khau\t\tDiem thi\n");
    for (int i = 0; i <= 0; i++)
    {
        printf("%d\t%s\t%d/%d/%d\t%s\t%s\t\t%.2f",sv[i].maSinhVien,sv[i].hoTen, sv[i].ngayThangNamSinh.ngay, sv[i].ngayThangNamSinh.thang, sv[i].ngayThangNamSinh.nam, sv[i].gioiTinh, sv[i].hoKhau, sv[i]. diemThiDaiHoc);
        printf("\n----------------------------------------------------------------------------------------------\n");
    }
    for (int i = 1; i < n; i++)
    {
        printf("%d\t%s\t\t\t%d/%d/%d\t%s\t%s\t\t%.2f",sv[i].maSinhVien,sv[i].hoTen, sv[i].ngayThangNamSinh.ngay, sv[i].ngayThangNamSinh.thang, sv[i].ngayThangNamSinh.nam, sv[i].gioiTinh, sv[i].hoKhau, sv[i]. diemThiDaiHoc);
        printf("\n----------------------------------------------------------------------------------------------\n");
    }
    
}


int main(){
    SinhVien sv[100]; int n;
    nhapDanhSach(sv,n); xuatDanhSach(sv,n);
}

