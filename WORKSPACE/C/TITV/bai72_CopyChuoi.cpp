#include "stdio.h"
#include "string.h"
void copy(char x1[], char x2[]){
    size_t len2 = strlen(x2);
    for (int i = 0; i < len2; i++)
    {
        x1[i]=x2[i];
    }
    x1[len2]='\0';
}
int main(){
    char s_1[100]= "Xin chao Nguyen Phuong Nam!";
    char s_2[100] = "";
    printf("before s1 is: %s", s_1);
    printf("\nbefore s2 is: %s", s_2);
    printf("\n------------");
    /*strcpy(s_2,s_1);
    printf("\nafter s1 is: %s", s_1);
    printf("\nafter s2 is: %s", s_2);*/
    copy(s_2,s_1);
    printf("\nafter s1 is: %s", s_1);
    printf("\nafter s2 is: %s", s_2);
}