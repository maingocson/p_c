#include "stdio.h"
#include "conio.h"

void main()
{
	clrscr();
	long danso,sonam;
	float tyle;

	printf("Nhap dan so: ");
	scanf("%ld",&danso);
	printf("Nhap ty le gia tang hang nam(%): ");
	scanf("%f",&tyle);
	printf("So nam sau do: ");
	scanf("%ld",&sonam);

	for(int i=1;i<=sonam;i++)
	{
		danso=danso+danso*((float)tyle/100);
	}
	printf("Dan so sau %ld nam se dat %ld",sonam,danso);

	getch();
}

