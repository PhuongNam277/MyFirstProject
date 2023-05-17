#include "stdio.h"
#include "stdlib.h"

void docFile(char tenFile[50], int *hr, int *min, int &n){
    FILE *f;
    f = fopen(tenFile, "r");

    if (f == NULL)
    {
        printf("\nKhong the mo tep!");
        return;
    }

    fscanf(f, "%d\n", &n);
    printf("%d\n", n);
    hr = (int*)malloc(sizeof(int)*n);
    min = (int*)malloc(sizeof(int)*n);
    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%d%d", &hr[i], &min[i]);
        printf("%d %d\n", hr[i], min[i]);
    }
    
    fclose(f);
    
}

void tinhTBCPhut(char tenFile[50], int *hr, int *min, int &n){
    FILE *f;
    f = fopen(tenFile, "r");

    if (f == NULL)
    {
        printf("\nKhong the mo tep!");
        return;
    }
    int i = 0; int tbcmin = 0, dem = 0;
    hr = (int*)malloc(sizeof(int)*n);
    min = (int*)malloc(sizeof(int)*n);
    while (!feof(f))
    {
        fscanf(f, "%d", &hr[i]);
        if (hr[i]==10)
        {
            fscanf(f, "%d", &min[i]);
            tbcmin += min[i];
            dem++;
        }
        i++;
    }
    float tbc = (float)tbcmin/dem;
    if (dem!=0)
    {
        printf("\nb, TBC so phut doi voi nhung thong tin den luc 10 gio la: %.2f", tbc);
    }else
    {
        printf("\nb, Khong co thong tin nao gui den luc 10 gio");
    }
}

void check(char tenFile[50], int *hr, int *min, int &n){
    FILE *f;
    f = fopen(tenFile, "r");
    int c;

    if (f == NULL)
    {
        printf("\nKhong the mo tep!");
        return;
    }
    hr = (int*)malloc(sizeof(int)*n);
    min = (int*)malloc(sizeof(int)*n);

    fscanf(f, "%d", &n);

    int time[n];

    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%d%d", &hr[i], &min[i]);
        time[i] = hr[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        if (hr[i] >= hr[i+1])
        {
            c = 1;
        }
        
    }
    
    if (c==1)
    {
        printf("\nCheck thoi gian tang dan: KHONG");
    }
    else
    {
        printf("\nCheck thoi gian tang dan: CO");
    }
    
    
}
int main(){
    int *hr; int *min; int n;
    printf("a, \n");
    docFile("utc.txt", hr, min, n);
    tinhTBCPhut("utc.txt", hr, min, n);
    check("utc.txt", hr, min, n);
    return 0;
}