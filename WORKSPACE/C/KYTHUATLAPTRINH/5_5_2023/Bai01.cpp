#include "bits/stdc++.h"

    struct TTCM
    {
        int *maDeTai;
        char nhanXet[100];
        int *diemGiaoDien, *diemChucNang;

    };

void sapXep(TTCM ds[]){
    int gd,cn;
    TTCM temp;
    FILE *f;
    f = fopen("Bai01.txt", "r");
    if (f == NULL)
    {
        printf("\nKhong doc duoc tep!");
    }
    int n; fscanf(f, "%d\n", &n);
    int diemTB[n];
    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%d\n", &ds->maDeTai[i]);
        fgets(ds[i].nhanXet, 100, f);
        fscanf(f, "%d\n", &ds->diemGiaoDien[i]);
        gd = ds->diemGiaoDien[i];
        fscanf(f, "%d\n", &ds->diemChucNang[i]);
        cn = ds->diemChucNang[i];
        diemTB[i] = gd*0.2 + cn*0.8;
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (diemTB[j]<diemTB[i])
            {
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
            
        }
        
    }
    printf("\nDanh sach sau khi sap xep: ");
    for (int i = 0; i < n; i++)
    {
        printf("\nMa de tai: %d", ds->maDeTai[i]);
        printf("\nNhan xet: %s", ds[i].nhanXet);
        printf("Diem giao dien: %d", ds->diemGiaoDien[i]);
        printf("\nDiem giao dien: %d", ds->diemChucNang[i]);
    }

}


int main()
{
    
    int n;
    FILE *f;
    f = fopen("Bai01.txt", "r");
    if (f == NULL)
    {
        printf("\nKhong doc duoc tep!");
    }
    
    fscanf(f, "%d\n", &n);
    TTCM ds[n];
    ds->maDeTai = (int*) malloc(sizeof(int)*n);
    ds->diemGiaoDien = (int*) malloc(sizeof(int)*n);
    ds->diemChucNang = (int*) malloc(sizeof(int)*n);

    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%d\n", &ds->maDeTai[i]);
        fgets(ds[i].nhanXet, 100, f);
        fscanf(f, "%d\n", &ds->diemGiaoDien[i]);
        fscanf(f, "%d\n", &ds->diemChucNang[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("\nMa de tai: %d", ds->maDeTai[i]);
        printf("\nNhan xet: %s", ds[i].nhanXet);
        printf("Diem giao dien: %d", ds->diemGiaoDien[i]);
        printf("\nDiem giao dien: %d", ds->diemChucNang[i]);
    }
    
    int timKiem;
    printf("\nNhap ma so de tai can tim kiem: "); scanf("%d", &timKiem);
    FILE *sch;
    sch = fopen("TimKiem.txt", "w");
    for (int i = 0; i < n; i++)
    {
        if (ds->maDeTai[i] == timKiem)
        {
            printf("\nDa tim thay");
            fprintf(sch, "%d\n", ds->maDeTai[i]);
            fputs(ds[i].nhanXet, sch);
            fprintf(sch, "%d\n", ds->diemGiaoDien[i]);
            fprintf(sch, "%d\n", ds->diemChucNang[i]);
        }
        
    }
}

