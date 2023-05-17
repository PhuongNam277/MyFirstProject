#include "stdio.h"
#include "string.h"
int main(){
    char gt1[5] = "Nam";
    printf("\n%s",gt1);
    char gt2[10];
    strcpy(gt2,gt1);
    printf("\n%s", gt2);
}