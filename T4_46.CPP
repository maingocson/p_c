#include "stdio.h"
#include "conio.h"
#include "math.h"

void main()
{
	clrscr();
	int n;
	long s=0;
	printf("Nhap n: ");
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		s+=pow(i,2);
	}
	printf("S= %ld",s		);


	getch();
}

