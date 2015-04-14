#include "stdio.h"
#include "conio.h"
void main()
{
	clrscr();
	int n;
	double s=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		printf("\n%d\n",i);
		s+=(double)(i-1)/i;
		printf("\n%lf",s);
	}
	printf("\n*S= %lf",s);
	getch();
}