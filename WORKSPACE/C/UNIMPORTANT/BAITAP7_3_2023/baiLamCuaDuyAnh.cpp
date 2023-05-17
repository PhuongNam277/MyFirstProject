#include<stdio.h>
#include<math.h>
void nhaphs(int n,int a[1000]){
	for(int i=0;i<n+1;i++)
		{
			printf("\nhe so %d = ",i+1);scanf("%d",&a[i]);	
		}
}
void indathuc(int n, int a[1000]){
	for(int i=0;i<n;i++)
	{
		printf("%d*x^%d + ",a[i],i+1);
	}
	printf("%d\n",a[n]);
}

void tinhdt(int n,int a[1000],int d,int t){
	for(int i=0;i<n;i++)
	{
		t+=a[i]*pow(d,i+1);
	}
}
int main()
{
	int n,m,k,d,i,j;
	int a[1000],x[1000],y[1000];
	int t1=0,t2=0,t3=0;
	printf("Nhap bac cho da thuc P(x): ");
	do{
		printf("n>=0;n=");
		scanf("%d",&n);
	} while(n<=0);

	
	printf("\nNhap bac cho da thuc Q(x): ");
	do{
		printf("m>=0;m=");
		scanf("%d",&m);
	} while(m<=0);

	printf("\nNhap bac cho da thuc R(x): ");
	do{
		printf("k>=0;k=");
		scanf("%d",&k);
	} while(k<=0);

	printf("\nNhap he so cho da thuc bac %d P",n);
	nhaphs(n,a);
	
	printf("\nNhap he so cho da thuc bac %d Q",m);
	nhaphs(m,x);
	
	printf("\nNhap he so cho da thuc bac %d R",k);
	nhaphs(k,y);
	printf("cac da thuc vua nhap la:\n");
	indathuc(n,a);
	
	indathuc(m,x);
	
	indathuc(k,y);
	
	printf("nhap d= ");scanf("%d",&d);
	
	tinhdt(n,a,d,t1);
	
	tinhdt(m,x,d,t2);
	
	tinhdt(k,y,d,t3);
	
	printf("P(%d)+Q(%d)+R(%d)=%d",d,d,d,t1+a[n]+t2+x[m]+t3+y[k]);
}
