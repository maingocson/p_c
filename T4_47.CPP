#include "stdio.h"
#include "conio.h"
#include "math.h"
//s=1+1/2+1/3
void main()
{
	clrscr();
	int n;
	double s=0;
	printf("Nhap n: ");
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		s+=1.0/i;
	}
	printf("S= %lf",s);


	getch();
}

