#include "stdio.h"
#include "string.h"
void xxd(char x[]){
    size_t len = strlen(x);
    if (x[len-1]=='\n')
    {
        x[len-1] = '\0';
    }
    
}
int main(){
    char x[100];
    gets(x);
    xxd(x);
    size_t len = strlen(x);
    int tanSuat[len];
    for (int i = 0; i < len; i++)
    {
        
        tanSuat[i] = -1;
    }
    int count;
    for (int i = 0; i < len; i++)
    {
        count = 1;
        for (int j = i+1; j < len; j++)
        {
            if (x[i]==x[j])
            {
                count++;
                tanSuat[j] = 0;
            }
            
        }
        if (tanSuat[i]!=0)
        {
            tanSuat[i] = count;
        }
        
        
    }
    for (int i = 0; i < len; i++)
    {
        if (tanSuat[i]!=0)
        {
            printf("(%s^%d)", x[i], tanSuat[i]);
        }
        
        
    }
    
}