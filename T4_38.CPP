#include "stdio.h"
#include "conio.h"
#include "math.h"
void main()
{
	clrscr();
	int n;
	double a;

	printf("Nhap so nguyen n: ");
	scanf("%d",&n);

	printf("Nhap so thuc a: ");
	scanf("%lf",&a);

	printf("KQ= %lf",(double)pow(a,n));



	getch();
}