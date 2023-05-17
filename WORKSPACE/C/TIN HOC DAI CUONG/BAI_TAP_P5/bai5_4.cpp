#include "stdio.h"
#include "math.h"
bool kiemTra(float a, float b, float c){
	bool kq = false;
	if(a+b>c&&a+c>b&&b+c>a) kq = true;
	return kq;
}
float heron(float a, float b, float c){
	float p = (a+b+c)/2;
	float dt = sqrt(p*(p-a)*(p-b)*(p-c));
	return dt;
}
void nhap(float x[100], int &n){
	printf("n = "); scanf("%d",&n);
	for(int i = 0; i<n; i++){
		printf("x[%d] = ", i+1); scanf("%f",&x[i]);
	}
}
void ghepSo(float x[100], int n){
	int dem =0; float dt =0;
	for(int i = 0; i<n-2; i++){
		for(int j = i+1; j<n-1; j++){
			for(int k = j+1; k<n; k++){
				if(kiemTra(x[i],x[j],x[k])==true){
					dem++;
                    dt += heron(x[i], x[j], x[k]);
				}
			}
		}
	}
	if(dem > 0) printf("\nCo %d cach chon tm", dem);
	else printf("Khong ton tai tam giac");
	printf("\nTBC dt = %.2f", (float)dt/dem);
}
int main(){
	float a[100]; int n;
	nhap(a,n);
	ghepSo(a,n);
}
