#include "stdio.h"
#include "string.h"
char* my_strchr(char x[100], char tk){
    for (int i = 0; i < strlen(x); i++)
    {
        if (x[i]==tk)
        {
            return &x[i];
        }
        
    }
    
}
int main(){
    char s1[100];
    printf("Nhap chuoi: ");
    fgets(s1, sizeof(s1), stdin);
    char *s2 = my_strchr(s1, 'P');
    printf("s1 : %s",s1);
    printf("s2 : %s", s2);
}