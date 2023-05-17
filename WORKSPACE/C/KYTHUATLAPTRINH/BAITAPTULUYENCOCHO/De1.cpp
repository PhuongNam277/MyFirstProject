#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"
void xxd(char x[]){
    size_t len = strlen(x);
    if (x[len-1]=='\n')
    {
        x[len-1] = '\0';
    }
}

void nhapDiem(int x[], int y[], int &n){
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i+1); scanf("%d", &x[i]);
        printf("y[%d] = ", i+1); scanf("%d", &y[i]);
    }
}

void luuVaoTep(int x[], int y[], int &n, char tenFile[50]){
    FILE *f;
    f = fopen(tenFile, "w");

    if (f == NULL)
    {
        printf("Khong the ghi vao tep!");
        return;
    }
    
    fprintf(f, "%d\n", n);
    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%d %d\n", x[i], y[i]);
    }
    
    fclose(f);
}

void DocTuTep(int x[], int y[], int n, char tenFile[50]){
    FILE *f;
    f = fopen(tenFile, "r");

    if (f == NULL)
    {
        printf("Khong the doc tu tep!");
        return;
    }
    
    fscanf(f, "%d", &n);
    printf("So luong phan tu: %d\n", n);
    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%d%d", &x[i], &y[i]);
        printf("%d %d\n", x[i], y[i]);
    }
    fclose(f);
}

void kiemTraWithR(int x[], int y[], int n, char tenFile[50], int bk){
    FILE *f;
    f = fopen(tenFile, "r");

    if (f == NULL)
    {
        printf("Khong the ghi vao tep!");
        return;
    }
    int i = 0, dem = 0; printf("Nhap r can kiem tra: "); scanf("%d", &bk);
    while (fscanf(f, "%d", &n) != EOF)
    {
        if (sqrt(pow(x[i], 2)+pow(y[i], 2))<=bk)
        {
            dem++;
        }
        i++;
    }
    i = n;
    printf("Co %d doan nam trong duong tron tam O bk %d", dem, bk);
    fclose(f);
}

int tdd(int x, int y){ //tinh do dai
    return sqrt(pow(x,2)+pow(y,2));
}
void timTamGiacVuong(int x[], int y[], int n, char tenFile[50]){
    FILE *f;
    f = fopen(tenFile, "r");

    if (f == NULL)
    {
        printf("Khong the ghi vao tep!");
        return;
    }
    float dienTich; float dttam = 0;
    while (fscanf(f, "%d", &n) != EOF)
    {
        for (int i = 0; i < n-2; i++)
        {
            for (int j = i+1; j < n-1; i++)
            {
                for (int k = j+1; k < n; k++)
                {
                    if (pow(tdd(x[i], y[i]), 2) + pow(tdd(x[j], y[j]), 2) == pow(tdd(x[k], y[k]),2))
                    {
                        dienTich = 0.5*tdd(x[i], y[i])*tdd(x[j], y[j]);
                        if (dienTich > dttam)
                        {
                            dttam = dienTich;
                            printf("\nDien tich tam giac vuong = %.2f", dttam);
                        }
                        dienTich = 0;
                    }
                    if (pow(tdd(x[i], y[i]), 2) + pow(tdd(x[k], y[k]), 2) == pow(tdd(x[j], y[j]),2))
                    {
                        dienTich = 0.5*tdd(x[i], y[i])*tdd(x[k], y[k]);
                        if (dienTich > dttam)
                        {
                            dttam = dienTich;
                            printf("\nDien tich tam giac vuong = %.2f", dttam);
                        }
                        dienTich = 0;
                    }
                    if (pow(tdd(x[k], y[k]), 2) + pow(tdd(x[j], y[j]), 2) == pow(tdd(x[i], y[i]),2))
                    {
                        dienTich = 0.5*tdd(x[k], y[k])*tdd(x[j], y[j]);
                        if (dienTich > dttam)
                        {
                            dttam = dienTich;
                            printf("\nDien tich tam giac vuong = %.2f", dttam);
                        }
                        dienTich = 0;
                    }
                    
                }
            }
        }   printf("\nKhong co tam giac vuong");
    }
    fclose(f);
}
int main(){
    int n; 
    // printf("Nhap so luong diem: "); scanf("%d", &n);
    int x[100], y[100]; int bk;
    // nhapDiem(x, y, n);  char tenFile[50];
    // printf("Nhap ten file: "); fflush(stdin); fgets(tenFile, sizeof(tenFile), stdin); xxd(tenFile);
    // luuVaoTep(x, y, n, tenFile);
    DocTuTep(x, y, n, "De01_out");
    // kiemTraWithR(x, y, n, "De01_out", bk);
    // timTamGiacVuong(x, y, n, "De01_out");
    return 0;
}