#include <stdio.h>
int a[100][100];
int m, n;

void nhapMaTran(int x[100][100], int &m, int &n){
	do{
		printf("Nhap vao m va n: ");
		scanf("%d%d", &m, &n);
	}while(m<=0 || n<=0);
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("x[%d][%d]=", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}

void xuatMaTran(int x[100][100], int m, int n){
	printf("\nMang: \n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

int timMin_Dong(int x[100][100], int m, int n, int dong){
	int min = x[dong][0];
	for(int j=0; j<n; j++){
		if(min>x[dong][j]){
			min = x[dong][j];
		}
	}
	return min;
}

int timMax_Dong(int x[100][100], int m, int n, int dong){
	int max = x[dong][0];
	for(int j=0; j<n; j++){
		if(max<x[dong][j]){
			max = x[dong][j];
		}
	}
	return max;
}

int timMin_Cot(int x[100][100], int m, int n, int cot){
	int min = x[0][cot];
	for(int i=0; i<m; i++){
		if(min>x[i][cot]){
			min = x[i][cot];
		}
	}
	return min;
}
int timMax_Cot(int x[100][100], int m, int n, int cot){
	int max = x[0][cot];
	for(int i=0; i<m; i++){
		if(max<x[i][cot]){
			max = x[i][cot];
		}
	}
	return max;
}
int main(){
	nhapMaTran(a, m, n);
	xuatMaTran(a, m, n);
	printf("\nMin cot 1 la: %d", timMin_Cot(a, m, n, 1));
	printf("\nMax cot 2 la: %d", timMax_Cot(a, m,n, 2));
	printf("\nMin cua dong 0 la: %d", timMin_Dong(a, m,n, 0));
	printf("\nMax cua dong 2 la: %d", timMax_Dong(a, m , n , 2));
	
}