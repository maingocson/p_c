#include "stdio.h"
#include "conio.h"
#include "math.h"
void main()
{
	clrscr();
	int n;
	float x;
	double s=0,tong=0;
	printf("Nhap so thuc x: ");
	scanf("%f",&x);
	printf("\nNhap n: ");
	scanf("%d",&n);
	fflush(stdin);
	for(int i=1;i<=n;i++)
	{
		tong+=i;
		s+=(double)pow(x,i)/tong;
	}
	printf("S= %lf",s);
	getch();
	}
