#include <stdio.h>
#include <conio.h>
long fibonacci(int n)
{
	if (n==0 || n == 1)
	return 1;
	return fibonacci (n - 1) + fibonacci (n -2);
}


int main ()
{
	long n;
	printf("Nhap n : ");
	scanf("%d", &n);
	printf("So fibonacci thu %d la : %d", n, fibonacci(n) );
	return 0;
}