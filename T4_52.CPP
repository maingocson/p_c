#include "stdio.h"
#include "conio.h"
void main()
{
	clrscr();
	int n;
	double s=1	;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(int i=n;i>=1;i--)
	{
		s*=i	;
	}
	printf("S= %lf",s);
	getch();
}