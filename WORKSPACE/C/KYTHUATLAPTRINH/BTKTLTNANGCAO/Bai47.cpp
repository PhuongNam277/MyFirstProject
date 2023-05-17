#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
int main(){
    int n = 30000; int int_number[n];
    srand(time(NULL));
    int tanSuat[n];
    for (int i = 0; i < n; i++)
    {
        int_number[i] = rand() % 20000 + 0;
        tanSuat[i] = -1;
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", int_number[i]);
    }
    int count;
    // dem tan suat
    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i+1; j < n; j++)
        {
            if (int_number[i]==int_number[j])
            {
                count++;
                tanSuat[j] = 0;
            }
            
        }
        if (tanSuat[i]!=0)
        {
            tanSuat[i] = count;
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        if (tanSuat[i]!=0)
        {
            printf("\nSo %d lap lai %d lan!", int_number[i], tanSuat[i]);
        }
        
        
    }
    
}

// #include <stdio.h>
// int main()
// {
//     int arr[100], freq[100];
//     int size, i, j, count;
//     printf("Enter size of array: ");
//     scanf("%d", &size);
//     printf("Enter elements in array: ");
//     for(i=0; i<size; i++)
//     {
//         scanf("%d", &arr[i]);
//         freq[i] = -1;
//     }
//     for(i=0; i<size; i++)
//     {
//         count = 1;
//         for(j=i+1; j<size; j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 count++;
//                 freq[j] = 0;
//             }
//         }
//         if(freq[i] != 0)
//         {
//             freq[i] = count;
//         }
//     }
//     printf("\nFrequency of all elements of array : \n");
//     for(i=0; i<size; i++)
//     {
//         if(freq[i] != 0)
//         {
//             printf("%d occurs %d times\n", arr[i], freq[i]);
//         }
//     }
//     return 0;
// }