#include "stdio.h"
#include "string.h" // đây là hàm tính số lượng kí tự
int main()
{
    int t[100],a,c;
    char b[100],s;
    do
    {
        printf("Nhap so luong phan tu t can test (0<t<=100) : ");
        scanf("%d",&a);
    } while (a>100||a<1);

    for (int i = 0; i < a; i++)
    {
        printf("t[%d] : ",i);
        fflush(stdin);
        scanf("%c",&b[i]);
    }
     
    for (int i = 0; i < a; i++)
    {
        char doDai[] = b[i];
        strlen(doDai) = c;
        if(c%2==0)
        {
            printf("\nYES");
        }
        else printf("\nNO");
    }
    
}