#include "stdio.h"
#include "conio.h"
//USCLN thuat toan euclid
int main()
{
//	clrscr();
	int a,b,r;
	printf("Nhap 2 so a,b: ");
	scanf("%d %d",&a,&b);
	r=a%b;
	while(r!=0)
	{
		a=b;
		b=r;
		r=a%b;
	}
	printf("Uoc so chung lon nhat la: %d",b);
	getch();
return 1;
}

