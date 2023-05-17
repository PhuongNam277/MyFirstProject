#include<stdio.h>
#include<conio.h>
typedef struct TS{
char sobd[10],hten[30];
float toan,ly,hoa,td;
};
int main() {
TS ts[100], tg,max; int i,j,n; float dc, t,l,h;
printf("n=");scanf("%d",&n);
for (i=1;i<=n;i++) {
printf("nhap thong tin cho thi sinh thu %d:",i);
printf("so bao danh:"); fflush(stdin); gets(ts[i].sobd);
printf("ho ten:"); fflush(stdin); gets(ts[i].hten);
printf("nhap diem toan, ly hoa:");
scanf("%f%f%f",&t,&l,&h);
ts[i].toan=t; ts[i].ly=t;ts[i].hoa=h; ts[i].td=t+l+h;
}
//nhap dien chuan va in ra ds thi sinh trung tuyen
printf("nhap diem chuan:");scanf("%f",&dc);
puts("danh sach thi sinh trung tuyen:");
for (i=1;i<=n;i++)
if(ts[i].td>=dc&&ts[i].toan*ts[i].ly*ts[i].ly!=0)
printf("%s %s%.2f %.2f %.2f
%.2f",ts[i].sobd,ts[i].hten,ts[i].toan,ts[i].ly,ts[i].hoa,ts[i].td);
//tim thi sinh co diem toan cao nhat
max=ts[1];
for (i=2;i<=n;i++)
if (max.toan<ts[i].toan)
max=ts[i];
printf("\nThong tin ve 1 sinh vien co diem toan cao nhat:");
printf("\nHo ten: %s",max.hoten);
printf("Toan : %3.1f\n",max.toan);
//in ra 3 thi sinh co tong diem cao nhat
//sap xep theo thu tu giam dan cua tong diem
for(i=1;i<=n-1;i++)
for(j=i+1;j<=n;j++)
if(ts[j].td>ts[i].td)
{tg=ts[i];ts[i]=ts[j];ts[j]=tg;}
puts("3 thi sin co diem cao nhat la:");
for(i=1 ;i<=3;i++)
printf("%s %s %.2f %.2f %.2f %.2f",
ts[i].sobd,ts[i].hten,ts[i].toan,ts[i].ly,ts[i].hoa,ts[i].td);
}