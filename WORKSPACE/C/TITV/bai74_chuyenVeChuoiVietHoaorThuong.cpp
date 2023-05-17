#include "stdio.h"
#include "string.h"
void my_strupr(char x1[]){
    for (int i = 0; i < strlen(x1); i++)
    {
        if (x1[i]>=95&&x1[i]<=122)
        {
            x1[i]=x1[i]-32;
        }    
    }
}
void my_strlwr(char x1[]){
    for (int i = 0; i < strlen(x1); i++)
    {
        if (x1[i]>=65&&x1[i]<=90)
        {
            x1[i]=x1[i]+32;
        }
    }
}
int main(){
    char s1 [100];
    printf("Nhap s1: ");
    fgets(s1, sizeof(s1), stdin);
    my_strupr(s1);
    printf("Chuyen ve viet hoa: %s",s1);
    my_strlwr(s1);
    printf("Chuyen ve viet hoa: %s",s1);
    //printf("Chuyen chuoi viet hoa: %s", strupr(s1));
    //printf("Chuyen chuoi viet hoa: %s", strlwr(s1));

}