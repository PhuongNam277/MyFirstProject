#include "stdio.h"
#include "string.h"
void xxd(char x[]){
    size_t len = strlen(x);

    if (x[len-1]=='\n')
    {
        x[len-1]='\0';
    }
    
}

int main(){
    char x[100];
    gets(x);
    xxd(x);
    int leng = strlen(x);
    for (int i = 1; i <= leng; i++)
    {
        if (x[i] == '#') //Nguyenn# Phuonky##g Nam
        {
            for (int j = i ; j < leng-1; j++)
            {
                x[j] = x[j+1];
                
            }
            x[len-1] = '\0';
        }
    }
    printf("%s", x);
}