#include<stdio.h>
#include<math.h>
// đa thức có dạng f(x)=a[1]x^1+a[2]x^2+...+a[n]x^n+a[n+1]!
// Hàm nhập các hệ số và bậc của đa thức!
void nhap(int x[], int &n)
{
	int i;
	printf("Nhap so bac cua da thuc: ");
	do {
		scanf("%d",&n);
	} while(n<=0);
	
	for(i=0;i<n+1;i++)
	{
		printf("\nHe so thu %d= ",i+1);
		scanf("%d",&x[i]);
	}
}

void dien(int &d)
{
	printf("d=");scanf("%d",&d);
}

// Hàm xuất đa thức!
void in(int x[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d*x^%d + ",x[i],i+1);
	}
	printf("%d\n",x[n]);
}

//	Hàm để tính đa thức khi thay x=d!
int tinhtong(int d,int a[],int n)
{
	int i,t1=0,t2=0;
	for(i=0;i<n;i++)
	{
		t1+=a[i]*pow(d,i+1);
	}
	t2=t1+a[n];
	return t2;
}

int main()
{
	int n, m, k, d;
	int a[1000],x[1000],y[1000];
	int t=0;
	
	printf("Nhap thong tin da thuc P:\n");
	nhap(a,n);printf("P(x)=");in(a,n);

	printf("\nNhap thong tin da thuc Q:\n");	
	nhap(x,m);printf("Q(x)=");in(x,m);
	
	printf("\nNhap thong tin da thuc R:\n");
	nhap(y,k);printf("R(x)=");in(y,k);
	
	printf("\nBien x=d!\n");
	dien(d);
	
	// tông cua P và Q và R khi thay x=d!
	t=tinhtong(d,a,n)+tinhtong(d,x,m)+tinhtong(d,y,k);	
	printf("P(%d)+Q(%d)+R(%d)=%d",d,d,d,t);
}