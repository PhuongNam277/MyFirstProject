#include "stdio.h"
#include "math.h"
struct PhanSo
{
    int tuSo;   int mauSo;
};
void nhapPS(PhanSo *ps){ //khai báo con trỏ 
    printf("Nhap tu so: ");
    scanf("%d", &ps ->tuSo);
    do
    {
        printf("Nhap mau so: ");
        scanf("%d", &ps->mauSo);
    } while (ps->mauSo==0);
    if(ps->mauSo<0){
        ps->tuSo*=-1;
        ps->mauSo*=-1;
    }
}
void rutGon(PhanSo *ps){
    int a = ps->tuSo;   int b = ps->mauSo;
    a = abs(a);     b = abs(b);
    int UCLN = 1;
    if(a==0||b==0){
        UCLN = a+b;
    }else{
        while (a!=b)
        {
            if(a>b) a = a-b;
            else b = b-a;
        }
        UCLN = a;
    }
    ps->tuSo /= UCLN;
    ps->mauSo /= UCLN;
}
void inPS(PhanSo ps){
    if(ps.mauSo==1){
        printf("%d", ps.tuSo);
    }else{
        printf("%d/%d", ps.tuSo, ps.mauSo);
    }
}
PhanSo congPhanSo(PhanSo ps1, PhanSo ps2){
    PhanSo kq;
    kq.tuSo = ps1.tuSo*ps2.mauSo + ps1.mauSo*ps2.tuSo;
    kq.mauSo = ps1.mauSo*ps2.mauSo;
    rutGon(&kq);
    return kq;
}
PhanSo truPhanSo(PhanSo ps1, PhanSo ps2){
    PhanSo kq;
    kq.tuSo = ps1.tuSo*ps2.mauSo - ps1.mauSo*ps2.tuSo;
    kq.mauSo = ps1.mauSo*ps2.mauSo;
    rutGon(&kq);
    return kq;
}
PhanSo nhanPhanSo(PhanSo ps1, PhanSo ps2){
    PhanSo kq;
    kq.tuSo = ps1.tuSo*ps2.tuSo;
    kq.mauSo = ps1.mauSo*ps2.mauSo;
    rutGon(&kq);
    return kq;
}
PhanSo chiaPhanSo(PhanSo ps1, PhanSo ps2){
    PhanSo kq;
    kq.tuSo = ps1.tuSo*ps2.mauSo;
    kq.mauSo = ps1.mauSo*ps2.tuSo;
    rutGon(&kq);
    return kq;
}
int main(){
    PhanSo ps1, ps2;
    printf("Nhap phan so thu nhat: \n");
    nhapPS(&ps1);
    rutGon(&ps1); //nếu sử dụng con trỏ phải thêm dấu '&'
    printf("Nhap phan so thu hai: \n");
    nhapPS(&ps2);
    rutGon(&ps2); //nếu sử dụng con trỏ phải thêm dấu '&'
    //inPS(&ps1);
    //inPS(&ps2);
    inPS(ps1); printf(" + "); inPS(ps2); printf(" = "); inPS(congPhanSo(ps1,ps2)); printf("\n");
    inPS(ps1); printf(" - "); inPS(ps2); printf(" = "); inPS(truPhanSo(ps1,ps2));  printf("\n");
    inPS(ps1); printf(" * "); inPS(ps2); printf(" = "); inPS(nhanPhanSo(ps1,ps2)); printf("\n");
    inPS(ps1); printf(" : "); inPS(ps2); printf(" = "); inPS(chiaPhanSo(ps1,ps2));
}