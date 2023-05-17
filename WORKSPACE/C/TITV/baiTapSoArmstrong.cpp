#include "stdio.h"
#include "math.h"
int main()
{
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <=9 ; j++)
        {
            for (int k = 0; k <=9 ; k++)
            {
                if(i==0&&j==0){
                    printf("%d ", k);
                }
                
            }
            
        }
        
    }
    
    
}