#include "stdio.h"
#include "math.h"
float distance(float x1, float y1, float x2, float y2) {
    float dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return dist;
}
float min_distance(float x[100], float y[100], int n)
{
    float min = 100000000;
    float d;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            
                d = distance(x[i], y[i], x[j], y[j]);
                if (min > d)
                {
                    min = d;
                }
            
        }
    }
    return min;
}
int main()
{
    int n;
    printf("Nhap so diem: ");
    scanf("%d", &n);
    float x[100], y[100];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap x va y diem thu %d: ", i + 1);
        scanf("%f%f", &x[i], &y[i]);
    }
    printf("\nKhoang cach min la: %.2f", min_distance(x, y, n));
}