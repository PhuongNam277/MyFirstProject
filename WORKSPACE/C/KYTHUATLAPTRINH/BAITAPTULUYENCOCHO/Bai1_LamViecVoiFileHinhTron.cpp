#include "stdio.h"
#include "stdlib.h"
#include "string.h"
void xxd(char x[]){
    size_t len = strlen(x);
    if (x[len-1]=='\n')
    {
        x[len-1] = '\0';
    }
}
void nhapHinhTron(int x[], int y[], int r[], int &n){
    printf("Nhap so luong hinh tron: "); scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i+1); scanf("%d", &x[i]);
        printf("y[%d] = ", i+1); scanf("%d", &y[i]);
        printf("R[%d] = ", i+1); scanf("%d", &r[i]);
    }
}
void nhapFile(int x[], int y[], int r[], int &n, char tenFile[50]){
    
    FILE *f;
    f = fopen(tenFile, "w");

    if (f == NULL)
    {
        printf("Loi tao file!");
        return;
    }

    fprintf(f, "%d\n", n);

    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%d %d %d\n", x[i], y[i], r[i]);
    }
    
    fclose(f);
}

void docThongTin(int x[], int y[], int r[], int n, char tenFile[50]){
    FILE *f;

    f = fopen(tenFile, "r");

    if (f == NULL)
    {
        printf("Loi tao file!");
        return;
    }

    fscanf(f, "%d\n", &n);
    printf("So luong hinh tron: %d\n", n);

    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%d %d %d\n", &x[i], &y[i], &r[i]);
        printf("Thong tin hinh tron %d: %d %d %d\n", i+1, x[i], y[i], r[i]);
    }
    
}

void demHinhTron(int x[], int y[], int r[], int n, char tenFile[50]){
    FILE *f;
    f = fopen(tenFile, "r");

    if (f == NULL)
    {
        printf("Loi tao file!");
        return;
    }
    int dem = 0, i = 0;
    while (fscanf(f, "%d", &n) != EOF)
    {
        if (x[i]==r[i])
        {
            dem++;
        }
        i++;
    }
    i = n;
    printf("\nCo %d hinh tron nam tren truc tung", dem);
}

void tinhTrungBinhR(int x[], int y[], int r[], int n, char tenFile[50]){
    FILE *f;
    f = fopen(tenFile, "r");

    if (f == NULL)
    {
        printf("Loi tao file!");
        return;
    }
    int dem = 0, i = 0, tong = 0; float tbc;
    while (fscanf(f, "%d", &n) != EOF)
    {
        if (x[i]<0&&y[i]<0)
        {
            tong+=r[i];
            dem++;
        }
        i++;
    }
    i = n;
    tbc = (float)tong/dem;
    printf("\nTBC R = %.2f", tbc);
}
int main(){
    int n, x[100], y[100], r[100]; char tenFile[50];
    // nhapHinhTron(x, y, r, n);
    // printf("Nhap ten file: "); fflush(stdin); fgets(tenFile, sizeof(tenFile), stdin); xxd(tenFile);
    // nhapFile(x, y, r, n, tenFile);
    docThongTin(x, y, r, n, "Bai1_out");
    demHinhTron(x, y, r, n, "Bai1_out");
    tinhTrungBinhR(x, y, r, n, "Bai1_out");
    return 0;
}