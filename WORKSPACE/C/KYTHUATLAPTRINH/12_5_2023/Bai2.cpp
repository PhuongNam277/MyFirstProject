#include "stdio.h"
#include "stdlib.h"
struct DS
{
    int maCongViec;
    char tenCongViec[100];
    int luongThang;
};

int main(){
    FILE *f;
    f = fopen("dsCongViec.txt", "r");
    if (f==NULL)
    {
        printf("Khong doc duoc tep");
    }

    
    int n;
    fscanf(f, "%d\n", &n);
    DS cv[n];
    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%d\n", &cv[i].maCongViec);
        fgets(cv[i].tenCongViec, sizeof(cv[i].tenCongViec), f);
        fscanf(f, "%d\n", &cv[i].luongThang);
    }
    
    fclose(f);

    FILE *fp;

    fp = fopen("rs.bin", "wb");
    
    if (fp == NULL)
    {
        printf("Khogn ghi duoc");
    }
    

    fwrite(&n, sizeof(int), 1, fp);

    fwrite(&cv, sizeof(struct DS), 1, fp);

    fp = fopen("rs.bin", "rb");

    fread(&n, sizeof(int), 1, fp);
    printf("n = %d\n", n);

   
        fread(&cv, sizeof(struct DS), n, fp);

    for (int i = 0; i < n; i++)
    {
        printf("Ma cong viec: %d\n", cv[i].maCongViec );
    }
    

    
    
}
