#include "stdio.h"
#include "stdlib.h"
int main(){
    FILE *f; // cach tao file

    f = fopen("Bai 088.txt", "w");
    if (f == NULL)
    {
        printf("\nLoi tao hoac mo file");
        exit(1);
    }
    int n;
    printf("\nNhap n: "); scanf("%d", &n);
    fprintf(f, "%d", n);

    fclose(f);

    return 0;
}