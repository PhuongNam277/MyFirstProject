#include "stdio.h"
#include "stdlib.h"

struct NgaySinh
{
    int ngay, thang, nam;
};

int main()
{
    FILE *f;
    f = fopen("Bai90.bin", "wb");

    if (f == NULL)
    {
        printf("Loi tao mo file!");
        exit(1);
    }
    
    // Ghi du lieu

    NgaySinh ns1;
    ns1.ngay = 27;
    ns1.thang = 7;
    ns1.nam = 2004;

    fwrite(&ns1, sizeof(struct NgaySinh), 1, f);

    //Dong file
    fclose(f);
    return 0;
}

