#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    
    int *a = (int*)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    qsort(a, n, sizeof(int), compare);
    
    int dem = 0;
    int left = 0;
    int right = n - 1;
    
    while (left < right) {
        if (a[left] + a[right] <= m) {
            dem += right - left;
            left++;
        } else {
            right--;
        }
    }
    
    printf("%d", dem);
    
    free(a);
    
}
