#include "stdio.h"
#include "string.h"
int my_strcmp(char x1[], char x2[]){
    int ketQua = 0;
    size_t len1 = strlen(x1);
    size_t len2 = strlen(x2);
    size_t min = len1<len2?len1:len2;
    for (int i = 0; i < min; i++)
    {
        ketQua = x1[i]-x2[i];
        if (ketQua!=0)
        {
            break;
        }
    }
    if (ketQua>0) return 1;
    else if (ketQua==0) return 0;
    else return -1;
}
int main(){
    char s1 [100]; char s2[100];
    printf("Nhap s1: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Nhap s2: ");
    fgets(s2, sizeof(s2), stdin);
    /*printf("Ket qua so sanh cua hai chuoi = %d\n", strcmp(s1,s2));
    if(strcmp(s1,s2)==0){
        printf("Suy ra hai chuoi giong nhau!");
    }
    else
    {
        printf("Suy ra hai chuoi khac nhau!");
    }*/
    printf("Ket qua so sanh cua 2 chuoi la = %d\n", my_strcmp(s1,s2));
    if(my_strcmp(s1,s2)==0){
        printf("Suy ra hai chuoi giong nhau!");
    }
    else
    {
        printf("Suy ra hai chuoi khac nhau!");
}
}