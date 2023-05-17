#include "stdio.h"
void nhapMaTran(int &m, int &n, int matrix[100][100]){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("x[%d][%d] = ", i+1, j+1); scanf("%d", &matrix[i][j]);
        }
    }
    
}

void nhapFile(int &m, int &n, int matrix[100][100]){
    FILE *f;
    f = fopen("MATRIX.INP", "w");

    if (f == NULL)
    {
        printf("\nKhong the ghi file!");
        return;
    }
    
    fprintf(f, "%d %d\n", m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fprintf(f, "%d ", matrix[i][j]);
        }
        fprintf(f, "\n");
    }
    
}

int checkSNT(int num){
    if (num == 1)
    {
        return 0;
    }
    
    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    
}
void kiemTra(int m, int n, int matrix[100][100]){
    FILE *f; int dem = 0;
    f = fopen("MATRIX.OUT", "w");
    if (f == NULL)
    {
        printf("\nKhong the doc file!");
        return;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(checkSNT(matrix[i][j])){
                dem++;
            }
        }
        
    }
    fprintf(f, "%d", dem);
}

int main(){
    int m, n, matrix[100][100];
    printf("Nhap m va n: "); scanf("%d%d", &m, &n);
    nhapMaTran(m, n, matrix);
    nhapFile(m, n, matrix);
    kiemTra(m, n, matrix);
}