#include "stdio.h"
#include "string.h"
void xoaXuongDong(char x[]){
    size_t len = strlen(x);
    if(x[len-1]=='\n') x[len-1] = '\0';
}
struct DiemTB
{
    float toan, ly, hoa, diemtb;
};
struct SinhVien
{
    int msv;    char ht[100];   DiemTB dtb;
};
int main(){
    SinhVien ds[100];
    int n; printf("Nhap so luong sinh vien: "); scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap thong tin sinh vien thu %d",i); printf("\n");
        printf("Nhap MSV: "); scanf("%d",&ds[i].msv);
        printf("Nhap ten: "); fflush(stdin); fgets(ds[i].ht, sizeof(ds[i].ht), stdin); xoaXuongDong(ds[i].ht);
        printf("Nhap diem 3 mon Toan, Ly, Hoa: "); scanf("%f%f%f", &ds[i].dtb.toan,&ds[i].dtb.ly,&ds[i].dtb.hoa);
        ds[i].dtb.diemtb= (ds[i].dtb.toan+ds[i].dtb.ly+ds[i].dtb.hoa)/3;
    }

    printf("Danh sach cac sinh vien vua nhap la: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d %s %.2f %.2f %.2f %.2f", ds[i].msv, ds[i].ht, ds[i].dtb.toan,ds[i].dtb.ly,ds[i].dtb.hoa,ds[i].dtb.diemtb);
        printf("\n");
    }

    float maxtb = ds[0].dtb.diemtb; int msvT; char htT[100]; float a1,a2,a3,a4;
    for (int i = 1; i < n; i++)
    {
        if(ds[i].dtb.diemtb>maxtb){
            maxtb = ds[i].dtb.diemtb;
             msvT = ds[i].msv;
             strcpy(htT,ds[i].ht);
            a1 = ds[i].dtb.toan; a2 = ds[i].dtb.ly;a3 = ds[i].dtb.hoa;a4 = ds[i].dtb.diemtb;
        }
    }
    printf("Sinh vien co diem trung binh cao nhat la: \n");
    printf("%d %s %.2f %.2f %.2f %.2f", msvT , htT, a1,a2,a3,a4); printf("\n");

    printf("Danh sach lop theo DTB tang dan la: "); SinhVien temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (ds[i].dtb.diemtb>ds[j].dtb.diemtb)
            {
                temp = ds[i];
                ds[i]= ds[j];
                ds[j] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d %s %.2f %.2f %.2f %.2f", ds[i].msv, ds[i].ht, ds[i].dtb.toan, ds[i].dtb.ly, ds[i].dtb.hoa, ds[i].dtb.diemtb);
        printf("\n");
    }

    printf("\ndanh sach hoc sinh co dtb >5...");
    for (int i = 0; i < n; i++)
    {
        if (ds[i].dtb.diemtb>5)
        {
            if (ds[i].dtb.toan>3&&ds[i].dtb.ly>3&&ds[i].dtb.hoa>3)
            {
                printf("%d %s %.2f %.2f %.2f %.2f", ds[i].msv, ds[i].ht, ds[i].dtb.toan,ds[i].dtb.ly,ds[i].dtb.hoa,ds[i].dtb.diemtb);
                printf("\n");
            }
            
        }
        
    }
    
}
