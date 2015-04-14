#include "stdio.h"
#include "conio.h"
#include "math.h"
void main()
{
	clrscr();
	int n;
	float x;
	double s=0,giaithua=1;
	printf("Nhap so thuc x: ");
	scanf("%f",&x);
	printf("\nNhap n: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		giaithua*=i;
		s+=(double)pow(x,i)/giaithua;
	}
	printf("S= %lf",s);
	getch();
	}