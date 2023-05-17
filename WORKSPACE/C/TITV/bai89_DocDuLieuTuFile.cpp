#include "stdio.h"
#include "stdlib.h"
int main(){
    FILE *f;

    f = fopen("Bai 088.txt", "r");
    if (f == NULL)
    {
        printf("\nLoi tao hoac mo file!");
    }
    
    int n;
    
    // Mo file
    fscanf(f, "%d", &n);
    printf("Gia tri cua n la: %d", n);
    

    fclose(f);

    return 0;
}