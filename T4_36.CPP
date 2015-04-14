#include "stdio.h"
#include "conio.h"

int main()
{
//	clrscr();
	int a,b,uscln;
	printf("Nhap 2 so a,b");
	scanf("%d %d",&a,&b);

	if(a==0&&b!=0)
	{
		uscln=b;
	}
	else if(a!=0&&b==0)
	{
		uscln=a;
	}
	else if(a==0&&b==0)
	{
		printf("Khong co uoc so chung lon nhat");
	}



	//getch();
	return 1
}

