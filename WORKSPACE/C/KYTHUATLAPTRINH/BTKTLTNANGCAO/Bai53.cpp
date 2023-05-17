#include "stdio.h"
#include "string.h"
void xxd(char x[]){
    size_t len = strlen(x);
    if (x[len-1]=='\n')
    {
        x[len-1] = '\0';
    }
}
struct QLSV
{
    int maSV; char ten[100]; int namSinh; float toan, ly, hoa, diemTB;
};

void nhapDS(QLSV ds[], int &n){
    printf("Nhap so luong sinh vien: "); scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nNhap thong tin sinh vien thu %d: ", i+1);
        printf("\nNhap ma sinh vien: "); scanf("%d", &ds[i].maSV);
        printf("Nhap ten sv: "); fflush(stdin); fgets(ds[i].ten, sizeof(ds[i].ten), stdin); xxd(ds[i].ten);
        printf("Nhap nam sinh: "); scanf("%d", &ds[i].namSinh);
        printf("Nhap diem toan: "); scanf("%f", &ds[i].toan);
        printf("Nhap diem ly: "); scanf("%f", &ds[i].ly);
        printf("Nhap diem hoa: "); scanf("%f", &ds[i].hoa);
        ds[i].diemTB = (float)(ds[i].toan + ds[i].ly + ds[i].hoa)/3;
    }
}

void xuat1sv(QLSV ds){
    printf("%d\t%s\t\t%d\t\t%.2f\t%.2f\t%.2f\t%.2f\t",ds.maSV, ds.ten, ds.namSinh, ds.toan, ds.ly, ds.hoa, ds.diemTB);
}

void xuatDS(QLSV ds[], int n){
    printf("MSV\tTen\t\tNam sinh\t\tToan\tLy\tHoa\tTB\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%d\t\t%.2f\t%.2f\t%.2f\t%.2f\t",ds[i].maSV, ds[i].ten, ds[i].namSinh, ds[i].toan, ds[i].ly, ds[i].hoa, ds[i].diemTB);
        printf("\n");
    }
    
}
void maxDTB(QLSV ds[], int n){
    float maxdtb = ds[0].diemTB; char tenMax[100]; strcpy(tenMax, ds[0].ten);
    for (int i = 1; i < n; i++)
    {
        if (ds[i].diemTB > maxdtb)
        {
            maxdtb = ds[i].diemTB;
            strcpy(tenMax, ds[i].ten);
        }
    }
    printf("\nSinh vien co diem trung binh cao nhat la: %s", tenMax);    
}

void sapXepTangDanDTB(QLSV ds[], int n){
    QLSV temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (ds[i].diemTB > ds[j].diemTB)
            {
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
            
        }
        
    }
    
}

void InSinhVien5(QLSV ds[], int n){
    for (int i = 0; i < n; i++)
    {
        if (ds[i].diemTB > 5&&ds[i].toan>3&&ds[i].hoa>3&&ds[i].ly>3)
        {
            xuat1sv(ds[i]);
        }
    }
}

void tuoiMax(QLSV ds[], int n){
    int tuoiMax = 2023 - ds[0].namSinh;
    char tenTuoiMax[100]; strcpy(tenTuoiMax, ds[0].ten);
    for (int i = 1; i < n; i++)
    {
        if (2023 - ds[i].namSinh > tuoiMax)
        {
            tuoiMax = 2023 - ds[i].namSinh;
            strcpy(tenTuoiMax, ds[i].ten);
        }
    }
    printf("\nSinh vien co tuoi lon nhat la: %s", tenTuoiMax);
}

void timKiem(QLSV ds[], int n){
    char tenSVCanTK[100]; int c = 0;
    printf("\nNhap ten sinh vien can tim kiem: "); fflush(stdin);
    fgets(tenSVCanTK, sizeof(tenSVCanTK), stdin); xxd(tenSVCanTK);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(tenSVCanTK, ds[i].ten)==0)
        {
            c = 1;
            printf("\nTim thay sinh vien: \n");
            xuat1sv(ds[i]);
        }
    }
    if (c==0)
    {
        printf("\nKhong tim thay sinh vien!");
    }
    
}
int main(){
    QLSV ds[100]; int n;
    nhapDS(ds, n);
    printf("\nDanh sach sinh vien vua nhap: ");
    printf("\n");
    xuatDS(ds, n);
    maxDTB(ds, n);
    sapXepTangDanDTB(ds,n);
    printf("\nDanh sach sinh vien sau khi sap xep tang dan theo diem trung binh: \n");
    xuatDS(ds, n);
    printf("\nDanh sach cac sinh vien co diem trung binh lon hon 5 va khong co mon nao duoi 3: \n");
    InSinhVien5(ds,n);
    tuoiMax(ds, n);
    timKiem(ds, n);
    return 0;
}

