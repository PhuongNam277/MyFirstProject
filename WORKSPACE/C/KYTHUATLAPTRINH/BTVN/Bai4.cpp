#include "stdio.h"
#include "string.h"
void xxd(char x[]){
    size_t len = strlen(x);
    if (x[len-1]=='\n')
    {
        x[len-1]='\0';
    }
    
}
struct SV
{
    char hvt[100]; float diemThi; int stt;
};
void nhap(SV ds[], int i){
    printf("Nhap so thu tu: "); scanf("%d",&ds[i].stt);
    printf("Nhap ho va ten : "); fflush(stdin);
    fgets(ds[i].hvt, sizeof(ds[i].hvt), stdin); xxd(ds[i].hvt);
    printf("Nhap diem thi: "); scanf("%f",&ds[i].diemThi);
}

void xuat(SV ds[], int i){
    printf("\nHo va ten: %s", ds[i].hvt);
    printf("\nDiem thi: %.2f", ds[i].diemThi);
}

void soSanhDiem(SV ds[], int sv1, int sv2){
    if(ds[sv1].diemThi>ds[sv2].diemThi){
        printf("\nSinh vien stt %d diem cao hon sinh vien stt %d!", sv1, sv2);
    }
    else
    {
        printf("\nSinh vien stt %d diem cao hon sinh vien stt %d!", sv2, sv1);
    }
    
}
void sapXepGiamDan(SV ds[], int n){
    SV temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (ds[j].diemThi>ds[i].diemThi)
            {
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
            
        }
        
    }
    
}
int main(){
    SV ds[100]; int n;
    printf("Nhap so luong sinh vien: "); scanf("%d",&n);
    for (int i = 0; i < n ; i++)
    {
        printf("Nhap thong tin sinh vien thu %d: \n", i+1);
        nhap(ds,i);
    }
    printf("\nDanh sach sinh vien vua nhap: \n");
    for (int i = 0; i < n ; i++)
    {
        xuat(ds,i);
    }
    soSanhDiem(ds,0,1);
    printf("\nDanh sach thi sinh diem giam dan: \n");
    sapXepGiamDan(ds,n);
    for (int i = 0; i < n; i++)
    {
        xuat(ds,i);
    }
    return 0;
}
