#include "stdio.h"
#include "string.h"

void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}

int main(){
	char chuoi[50];
	char chuoi_con[50];
	
	printf("Nhap vao chuoi: ");
	fgets(chuoi, sizeof(chuoi), stdin);
	xoaXuongDong(chuoi);
	
	printf("Nhap vao chuoi can tim: ");
	fgets(chuoi_con, sizeof(chuoi_con), stdin);
	xoaXuongDong(chuoi_con);
	
	char *kq = strstr(chuoi, chuoi_con);
	if(kq!=NULL){
		printf("Tim thay chuoi con!");
		printf("\n");
		printf("%s", kq);
	}else{
		printf("Khong tim thay chuoi con!");
	}
}