#include "stdio.h"
#include "string.h"
#include "time.h" // lay nam hien tai
void xoaXuongDong(char x[]){
    size_t len = strlen(x);
    if(x[len-1]=='\n') x[len-1]='\0';
}
struct date{
    int ngay; int thang; int nam;
};

struct SV
{
    int id;
    char ten[50];
    char gioiTinh[5];
    date ngaySinh;
    int tuoi;
    float diemMon1;
    float diemMon2;
    float diemMon3;
    float diemTrungBinh;
    char hocLuc[10];
    char maLop[30];
};
void nhapSinhVien(SV &sv){
    printf("Nhap ID: "); scanf("%d", &sv.id);
    printf("Nhap ten: "); fflush(stdin); fgets(sv.ten, sizeof(sv.ten), stdin); xoaXuongDong(sv.ten);
    printf("Nhap gioi tinh: "); fflush(stdin); fgets(sv.gioiTinh, sizeof(sv.gioiTinh), stdin); xoaXuongDong(sv.gioiTinh);
    printf("Ngay sinh: "); scanf("%d%d%d", &sv.ngaySinh.ngay, &sv.ngaySinh.thang, &sv.ngaySinh.nam);
    printf("Nhap diem mon 1: "); scanf("%f", &sv.diemMon1);
    printf("Nhap diem mon 2: "); scanf("%f", &sv.diemMon2);
    printf("Nhap diem mon 3: "); scanf("%f", &sv.diemMon3);
    printf("Nhap ma lop: "); fflush(stdin); fgets(sv.maLop, sizeof(sv.maLop), stdin); xoaXuongDong(sv.maLop);
}
void inSinhVien(SV sv){
    printf("%d   %9s\t%5s\t%2d/%d/%d\t%5d\t%5.2f\t%5.2f\t%5.2f\t%5.2f\t%5s\t%5s", sv.id, sv.ten, sv.gioiTinh, sv.ngaySinh.ngay, sv.ngaySinh.thang, sv.ngaySinh.nam, sv.tuoi, sv.diemMon1, sv.diemMon2, sv.diemMon3, sv.diemTrungBinh, sv.hocLuc, sv.maLop);
}
void tinhTuoi(SV &sv){
    time_t TIME = time(0); // lay gio hien tai cua may tinh
    tm* NOW = localtime(&TIME);
    int namHienTai = NOW->tm_year+1900;
    sv.tuoi = namHienTai - sv.ngaySinh.nam;
}
void tinhDiemTrungBinh(SV *sv){
    sv->diemTrungBinh = (sv->diemMon1+sv->diemMon2+sv->diemMon3)/3;
}
void xepLoai(SV &sv){
    if(sv.diemTrungBinh>=8){
        strcpy(sv.hocLuc, "Gioi");
    }
    else if (sv.diemTrungBinh<8&&sv.diemTrungBinh>=6.5)
    {
        strcpy(sv.hocLuc, "Kha");
    }
    else if (sv.diemTrungBinh<6.5&&sv.diemTrungBinh>=5)
    {
        strcpy(sv.hocLuc, "Trung binh");
    }
    else if(sv.diemTrungBinh<5){
        strcpy(sv.hocLuc, "Yeu");
    }
}
void capNhatSinhVien(SV &sv){
    nhapSinhVien(sv);
    tinhTuoi(sv);
    tinhDiemTrungBinh(&sv);
    xepLoai(sv);
}

void nhapDanhSachSinhVien(SV ds[], int &n){
    do
    {
        printf("Nhap so luong sinh vien: ");
        scanf("%d", &n);
    } while (n<0);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap thong tin sinh vien thu %d: \n", i);
        capNhatSinhVien(ds[i]);
    }
}
void xuatDanhSachSinhVien(SV ds[], int n){
    printf("%s  %s\t\t\t  %s  %s  %s\t%s\t%s\t%s\t%s\t%s\t%s", "ID","Ten","Gioi tinh","Ngay sinh","Tuoi","Diem mon 1","Diem mon 2","Diem mon 3","Diem trung binh","Hoc luc","Ma lop\n");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        inSinhVien(ds[i]);
        printf("\n");
    }
}
float timMaxDiemTrungBinh(SV ds[], int n){
    float max = ds[0].diemTrungBinh;
    for (int i = 0; i < n; i++)
    {
        if(max<ds[i].diemTrungBinh){
            max = ds[i].diemTrungBinh;
        }
    }
    return max;
}
int timMinTuoi(SV ds[], int n){
    int min = ds[0].tuoi;
    for ( int i = 0; i < n; i++)
    {
        if(min > ds[i].tuoi){
            min = ds[i].tuoi;
        }
    }
    return min;
}
void xuatDSSinhVienXepLoaiGioi(SV ds[], int n, char xepLoai[]){
    printf("Danh sach sinh vien xep loai gioi: \n");
    printf("%s%5s\t%5s\t%2s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s","ID","Ten","Gioi tinh","Ngay sinh","Tuoi","Diem mon 1","Diem mon 2","Diem mon 3","Diem trung binh","Hoc luc","Ma lop\n");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if(strcmp(ds[i].hocLuc, xepLoai)==0){
            inSinhVien(ds[i]);
            printf("\n");
        }
    }
}
void xuatDSSinhVienTheoLop(SV ds[], int n,  char lop[]){
    printf("Danh sach sinh vien theo lop: \n");
    printf("%s%5s\t%5s\t%2s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s\t%5s","ID","Ten","Gioi tinh","Ngay sinh","Tuoi","Diem mon 1","Diem mon 2","Diem mon 3","Diem trung binh","Hoc luc","Ma lop\n");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if(strcmp(ds[i].maLop, lop)==0){
            inSinhVien(ds[i]);
            printf("\n");
        }
    }
}
int timSinhVienTheoTen(SV ds[], int n, char ten[]){
    for (int i = 0; i < n; i++)
    {
        if (strstr(ds[i].ten, ten))
        {
            return 1;
        }
    }
    return 0;
}
void xoaSinhVienTheoID(SV ds[], int &n, int ID){
    for (int i = 0; i < n; i++)
    {
        if(ds[i].id == ID){
            for (int j = i; j < n; j++)
            {
                ds[j]= ds[j+1];
            }
            n-=1;
        }
    }
}
void sapXepSVTheoDiemTrungBinhTangDan(SV ds[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j= i+1; j < n; j++)
        {
            if(ds[i].diemTrungBinh>ds[j].diemTrungBinh){
                SV temp;
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}
void sapXepSVTheoTen(SV ds[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j= i+1; j < n; j++)
        {
            if (strcmp(ds[i].ten, ds[j].ten)>0) // > 0 tang dan, < 0 giam dan
            {
                SV temp;
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}
int main(){
    SV ds[100];
    int n;
    int chon;
    do
    {
        printf("\n MENU: ");
        printf("\n1 - Nhap danh sach sinh vien");
        printf("\n2 - Xuat danh sach sinh vien");
        printf("\n3 - Tim max diem trung binh");
        printf("\n4 - Tim min tuoi");
        printf("\n5 - Xuat danh sach sinh vien theo lop");
        printf("\n6 - Xuat danh sach sinh vien theo loai gioi");
        printf("\n7 - Sap xep sinh vien theo diem trung binh");
        printf("\n8 - Sap xep sinh vien theo ten");
        printf("\n9 - Tim sinh vien theo ten");
        printf("\n10 - Xoa sinh vien theo ID");
        printf("\n0 - Thoat");
        printf("\nLua chon cua ban: ");
        scanf("%d",&chon);

        switch (chon)
        {
        case 1:
            nhapDanhSachSinhVien(ds,n);
            break;
        case 2:
            xuatDanhSachSinhVien(ds,n); break;
        case 3:
            printf("\n DTB max = %.2f", timMaxDiemTrungBinh(ds, n)); break;
        case 4:
            printf("\n Min tuoi = %d", timMinTuoi(ds, n)); break;
        case 5:
            char lop[20];
            printf("Nhap ma lop can hien thi: \n");
            fflush(stdin); fgets(lop, sizeof(lop), stdin); xoaXuongDong(lop);
            printf("Danh sach sinh vien theo lop: ");
            xuatDSSinhVienTheoLop(ds, n, lop); break;
        case 6:
            char xepLoai[20];
            printf("Nhap xep loai can hien thi: \n");
            fflush(stdin); fgets(xepLoai, sizeof(xepLoai), stdin); xoaXuongDong(xepLoai);
            printf("Danh sach sinh vien theo loai %s: ", xepLoai);
            xuatDSSinhVienXepLoaiGioi(ds, n, xepLoai); break;
        case 7:
            sapXepSVTheoDiemTrungBinhTangDan(ds,n);
            printf("\nDanh sach sau khi sap xep theo diem trung binh tang dan: \n");
            xuatDanhSachSinhVien(ds,n); printf("\n"); break;
        case 8:
            printf("Danh sach sinh vien sau khi sap xep theo ten: "); sapXepSVTheoTen(ds,n); xuatDanhSachSinhVien(ds,n); break;
        case 9:
            char ten[50];
            printf("Nhap ten can tim: ");
            fflush(stdin); fgets(ten, sizeof(ten), stdin); xoaXuongDong(ten);
            printf("\nKet qua tim sinh vien theo ten: %d\n", timSinhVienTheoTen(ds,n,ten));
            printf("\n"); break;
        case 10:
            int id;
            printf("Nhap ID can xoa: ");
            scanf("%d",&id);
            xoaSinhVienTheoID(ds,n,id); printf("\n");
            printf("Danh sach sinh vien sau khi xoa: "); xuatDanhSachSinhVien(ds,n); break;
        default:
            break;
        }
    } while (chon!=0);
    
    /*nhapDanhSachSinhVien(ds,n);
    xuatDanhSachSinhVien(ds, n);
    printf("\n DTB max = %.2f", timMaxDiemTrungBinh(ds, n));
    printf("\n Min tuoi = %d", timMinTuoi(ds, n));
    printf("\n");
    xuatDSSinhVienXepLoaiGioi(ds, n);
    printf("\nKet qua tim sinh vien theo ten: %d\n", timSinhVienTheoTen(ds,n,"Nam"));
    printf("\n"); 
    printf("Danh sach sinh vien theo lop: ");
    xuatDSSinhVienTheoLop(ds, n, "kk");
    sapXepSVTheoDiemTrungBinhTangDan(ds,n);
    printf("\nDanh sach sau khi sap xep theo diem trung binh tang dan: \n");
    xuatDanhSachSinhVien(ds,n); printf("\n");
    printf("Danh sach xin vien theo ten: "); sapXepSVTheoTen(ds,n); xuatDanhSachSinhVien(ds,n);
    xoaSinhVienTheoID(ds,n,1); printf("\n");
    printf("Danh sach sinh vien sau khi xoa: "); xuatDanhSachSinhVien(ds,n);*/
    return 0;
}