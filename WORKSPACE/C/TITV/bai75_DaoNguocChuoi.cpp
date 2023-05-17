#include "stdio.h"
#include "string.h"
void my_strrev(char x[100]){
    size_t len = strlen(x);
    for (int i = 0; i < len/2; i++)
    {
        char temp = x[i];
        x[i] = x[len-i-1];
        x[len-i-1] = temp;

    }
    
}
int main(){
    char s1[100];
    printf("Nhap chuoi: ");
    fgets(s1, sizeof(s1), stdin);
    //printf("Chuoi bi dao nguoc thanh: %s", strrev(s1));
    my_strrev(s1);
    printf("Chuoi bi dao nguoc thanh: %s", s1 );
}
