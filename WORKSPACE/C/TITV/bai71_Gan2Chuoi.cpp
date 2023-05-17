#include "stdio.h"
#include "string.h"
void ganHaiChuoi(char x1[], char x2[]){
    size_t len1 = strlen(x1);
    size_t len2 = strlen(x2);
        for (int i = len1; i < len1 + len2 ; i++)
        {
            x1[i] = x2[i-len1];
        }
        x1[len1+len2]='\0';
}
int main(){
    char c1[1000]= "xin chao "; char c2[100]="minh la Nguyen Phuong Nam";
    //printf("Result: %s", strcat(c1,c2));
    ganHaiChuoi(c1,c2);
    printf("%s", c1);

}