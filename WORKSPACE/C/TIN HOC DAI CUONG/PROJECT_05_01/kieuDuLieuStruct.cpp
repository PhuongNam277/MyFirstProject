#include "stdio.h"
#include "string.h"
#include "math.h"
/*void xoaXuongDong(char x[]){
    size_t len = strlen(x);
    if (x[len-1]=='\n')
    {
        x[len-1]=='\0';
    }
}
void xoaXuongDong(char x[]){
    size_t len = strlen(x);
    if(x[len-1]=='\n') x[len-1]='\0';
}
struct Ngay
{
    int ngay; int thang; int nam;
};
struct SinhVien
{
    char hvt[100];
    Ngay birth;
};
void nhapSinhVien(SinhVien &sv1){
    printf("Nhap ten: "); fflush(stdin); fgets(sv1.hvt, sizeof(sv1.hvt), stdin); xoaXuongDong(sv1.hvt);
    printf("Nhap ngay sinh: "); scanf("%d%d%d", &sv1.birth.ngay,&sv1.birth.thang,&sv1.birth.nam);
}
void xuatSinhVien(SinhVien sv1){
    printf("%s  %d/%d/%d", sv1.hvt,sv1.birth.ngay,sv1.birth.thang,sv1.birth.nam);
}
int main(){
    SinhVien sv1;
    nhapSinhVien(sv1);
    xuatSinhVien(sv1);
}*/
// Nhap n diem trong khong gian 3 chieu roi in ra cac diem do cung voi khoang cach den goc toa do
 /*struct KG3Chieu
{
    float x,y,z;
};*/

struct soPhuc
{
    float pt, pa;
};


int main(){
    // KG3Chieu soDiem[100]; int n;
    // printf("Nhap so diem: "); scanf("%d",&n);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Nhap diem thu %d",i); printf("  Nhap x, y, z: "); scanf("%f%f%f", &soDiem[i].x, &soDiem[i].y, &soDiem[i].z);
    // }
    // printf("Cac diem vua nhap: \n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("(%.1f, %.1f, %.1f)  ", soDiem[i].x, soDiem[i].y, soDiem[i].z);
    //     printf("\nKhoang cach = %.2f\n", fabs(soDiem[i].x)+fabs(soDiem[i].y)+fabs(soDiem[i].z));
    // }
    soPhuc sp1, sp2;
    printf("Nhap phan thuc va phan ao so phuc 1: ");
    scanf("%f%f", &sp1.pt,&sp1.pa);
    printf("Nhap phan thuc va phan ao so phuc 2: ");
    scanf("%f%f", &sp2.pt,&sp2.pa);
    printf("Hai so phuc vua nhap la: \n");
    printf("(%.1f+%.1fi) ; (%.1f+%.1fi)\n", sp1.pt, sp1.pa, sp2.pt, sp2.pa);
    printf("Tong 2 so phuc = (%.1f+%.1fi)\n", sp1.pt+sp2.pt, sp1.pa+sp2.pa);
    printf("Hieu 2 so phuc = (%.1f+%.1fi)\n", sp1.pt-sp2.pt, sp1.pa-sp2.pa);
    printf("Tich 2 so phuc = (%.1f+%.1fi)\n", (sp1.pt*sp2.pt-sp1.pa*sp2.pa), (sp1.pt*sp2.pa+sp2.pt*sp1.pa));
    printf("Thuong 2 so phuc = (%.1f+%.1fi)", (float)(sp1.pt*sp2.pt+sp1.pa*sp2.pa)/(pow(sp2.pt,2)+pow(sp2.pa,2)), (float)(sp1.pt*sp2.pa-sp1.pa*sp2.pt)/(pow(sp2.pt,2)+pow(sp2.pa,2)));
}

