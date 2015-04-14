#include "stdio.h"
#include "conio.h"
void main()
{
	clrscr();
	int n;
	double s=0,tong=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		tong+=i;
		s+=1.0/tong;
	}
	printf("S= %lf",s);
	getch();
}