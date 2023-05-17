#include "stdio.h"
#include "string.h"
int main(){
    char x[100];
    gets(x);
    size_t len = strlen(x);
    int dem = 0;
    for (int i = 1; i < len; i++)
    {
        if (x[i]==x[0])
        {
            dem++;
        }
        
    }
    
    printf("%d", dem);
}