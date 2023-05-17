#include "stdio.h"
int main(){
    int n;
    scanf("%d", &n);
    int tonguoc = 0;
    if (n<1)
    {
         printf("Poor Number");
    }
    else
    {
        for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            tonguoc+=i;
        }
    }

    if (tonguoc>n)
    {
        printf("Rich Number");
    }
    else printf("Poor Number");
    }
    
    
    

    
    
}