#include "stdio.h"
/*void swap_1(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}*/

void swap_2(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}
int main(){
    int a = 5;
    int b = 10;
    printf("Before : a = %d and b = %d", a,b);
    swap_2(a,b);
     printf("\nAfter : a = %d and b = %d", a,b);
}