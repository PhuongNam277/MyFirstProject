#include "stdio.h"
int main(){
    FILE *f;
    int n; float x[100], y[100];
    f = fopen("Input1.txt", "r");
    if (f == NULL)
    {
        printf("\nKhong doc duoc tep");
        return 1;
    }

    fscanf(f, "%d\n", &n);
    printf("\nn = %d\n", n);
    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%f %f\n", &x[i], &y[i]);
        printf("(%.1f, %.1f)  ", x[i], y[i]);
    }
    
    fclose(f);
    
    
}