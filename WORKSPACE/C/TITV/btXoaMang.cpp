#include<stdio.h>
#include<conio.h>
main()
{
      int a[]={1,4,5,6,7};
      int n,i;
      n=sizeof(a)/sizeof(int);
      for(int i=0;i<n;i++)
      if(i%2) continue;
      else
      printf("%d",a[i]);
      getch();
}