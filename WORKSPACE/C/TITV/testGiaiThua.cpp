#include "stdio.h"
int giaiThua(int x){
	int giaiThua = 1;
	for(int i = 1; i<=x; i++){
		giaiThua = giaiThua *i;
	}
	printf("Giai thua = %d", giaiThua);
}
int main(){
	giaiThua(5);
}