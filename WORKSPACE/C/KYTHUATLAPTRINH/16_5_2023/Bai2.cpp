#include "bits/stdc++.h"
void xxd(char x[])
{
    size_t len = strlen(x);
    if (x[len - 1] == '\n')
    {
        x[len - 1] = '\0';
    }
}
struct DSL
{
    char cccd[100];
    char ht[100];
    char pb[10];
    float luong;
};

void NhapDanhSach(int n, DSL ds[], FILE *f)
{
    for (int i = 0; i < n; i++)
    {
        fgets(ds[i].cccd, sizeof(ds[i].cccd), f);
        xxd(ds[i].cccd);
        fgets(ds[i].ht, sizeof(ds[i].ht), f);
        xxd(ds[i].ht);
        fgets(ds[i].pb, sizeof(ds[i].pb), f);
        xxd(ds[i].pb);
        fscanf(f, "%f", &ds[i].luong);
        fscanf(f, "\n");
    }
}

void tongLuong(int n, DSL ds[], FILE *f)
{
    float tongLuongA = 0, tongLuongB = 0, tongLuongC = 0, tongLuongD = 0;
    for (int i = 0; i < n; i++)
    {
        fgets(ds[i].cccd, sizeof(ds[i].cccd), f);
        fgets(ds[i].ht, sizeof(ds[i].ht), f);
        fgets(ds[i].pb, sizeof(ds[i].pb), f);
        fscanf(f, "%f", &ds[i].luong);
        if (strcmp(ds[i].pb, "A") == 0)
        {
            tongLuongA += ds[i].luong;
        }
        else if (strcmp(ds[i].pb, "B") == 0)
        {
            tongLuongB += ds[i].luong;
        }
        else if (strcmp(ds[i].pb, "C") == 0)
        {
            tongLuongC += ds[i].luong;
        }
        else if (strcmp(ds[i].pb, "D") == 0)
        {
            tongLuongD += ds[i].luong;
        }
        fscanf(f, "\n");
    }
    printf("Tong luong A = %.2f", tongLuongA);
    printf("\nTong luong B = %.2f", tongLuongB);
    printf("\nTong luong C = %.2f", tongLuongC);
    printf("\nTong luong D = %.2f", tongLuongD);
}

void timKiem(char tenCanTk[100], char phongBan[10], DSL ds[], FILE *f, int n)
{
    for (int i = 0; i < n; i++)
    {
        fgets(ds[i].cccd, sizeof(ds[i].cccd), f);
        xxd(ds[i].cccd);
        fgets(ds[i].ht, sizeof(ds[i].ht), f);
        xxd(ds[i].ht);
        fgets(ds[i].pb, sizeof(ds[i].pb), f);
        xxd(ds[i].pb);

        if (strcmp(tenCanTk, ds[i].ht) == 0 && strcmp(phongBan, ds[i].pb) == 0)
        {
            printf("\nTim thay : ");
            printf("\nCCCD : %s", ds[i].cccd);
            printf("\nHo ten: %s", ds[i].ht);
            printf("\nPhong ban: %s", ds[i].pb);
            printf("\nLuong: %.2f", ds[i].luong);
        }

        fscanf(f, "%f", &ds[i].luong);
        fscanf(f, "\n");
    }
}

int main()
{
    int n;
    FILE *f;

    f = fopen("Input2.txt", "r");

    if (f == NULL)
    {
        printf("ERROR");
        return 0;
    }

    fscanf(f, "%d\n", &n);

    DSL ds[n];

    NhapDanhSach(n, ds, f);

    tongLuong(n, ds, f);

    char tenCanTim[100], phongban[100];
    fflush(stdin);
    printf("\nNhap ten can tim: ");
    fgets(tenCanTim, sizeof(tenCanTim), stdin);
    xxd(tenCanTim);
    printf("\nNhap phong ban: ");
    fgets(phongban, sizeof(phongban), stdin);
    xxd(phongban);

    timKiem(tenCanTim, phongban, ds, f, n);
}