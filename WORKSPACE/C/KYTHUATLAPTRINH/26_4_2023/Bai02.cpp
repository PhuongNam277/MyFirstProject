#include "bits/stdc++.h"
int main(){
    int n, *x; char tenTep[60];
    FILE *f;
    printf("\nNhap ten tep: "); gets(tenTep);
    f = fopen(tenTep, "r");
    if (f == NULL)
    {
        printf("\nKhong mo duoc file");
        return 1;
    }
    
    fscanf(f, "%d\n", &n);

    x = (int*) malloc(sizeof(int) * (n+1));

    for (int i = 0; i < n+1; i++)
    {
        fscanf(f, "%d ", &x[i]);
    }
    
    fclose(f);

    for (int i = 0; i < n+1; i++)
    {
        printf("%dx^%d + ", x[i], n-i);
    }
    printf("0");
}