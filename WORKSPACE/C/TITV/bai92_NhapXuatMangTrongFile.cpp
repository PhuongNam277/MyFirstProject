#include "stdio.h"
#include "stdlib.h"
void nhapMang(int x[], int &n){
    do
    {
        printf("Nhap so luong phan tu: "); scanf("%d", &n);
    } while (n<=0);
    
    for (int i = 0; i < n; i++)
    {
        printf("x[%d] = ", i+1); scanf("%d", &x[i]);
    }
}

void xuatMang(int x[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", x[i]);
    }
}

// XUAT FILE

void xuatFile(int x[], int &n, char tenFile[50]){
    FILE *f;
    f = fopen(tenFile, "w"); 

    if (f == NULL)
    {
        printf("Loi mo file!");
        return;
    }
    
    fprintf(f, "%d\n", n);

    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%d\n", x[i]);
    }

    fclose(f);
}

void xuatFile2(int x[], int &n, char tenFile[50]){
    FILE *f;
    f = fopen(tenFile, "w"); 

    if (f == NULL)
    {
        printf("Loi mo file!");
        return;
    }
    
    // Không in ra số lượng phần tử

    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%d\n", x[i]);
    }

    fclose(f);
}

void nhapFile(int x[], int n, char tenFile[50]){
    FILE *f;
    f = fopen(tenFile, "r");

    if (f == NULL)
    {
        printf("Loi mo file!");
        return;
    }

    fscanf(f, "%d\n", &n);

    printf("%d ", n);

    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%d\n", &x[i]);
        printf("x[%d] = %d\n", i+1, x[i]);
    }

    fclose(f);
}

void nhapFile2(int x[], int n, char tenFile[50]){
    FILE *f;
    f = fopen(tenFile, "r");

    if (f == NULL)
    {
        printf("Loi mo file!");
        return;
    }

    int i = 0;

    while (!feof(f))
    {
        fscanf(f, "%d", &x[i]);
        printf("x[%d] = %d\n", i+1, x[i]);
        i++;
    }
    
    n = i;

    fclose(f);
}

int main(){
    int x[100], n;
    // nhapMang(x, n);
    // xuatMang(x, n);
    // xuatFile2(x, n, "Bai92_2_out");
    nhapFile2(x, n, "Bai92_2_out");
    return 0;

}