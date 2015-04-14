#include "stdio.h"
#include "conio.h"
void main()
{
	clrscr();
	int a=968,tram, chuc, donvi,max;
	tram=a/100;
	chuc=(a%100)/10;
	donvi=(a%100)%10;

	printf("tram: %d, truc: %d, donvi: %d",tram,chuc,donvi);
	max=(tram>chuc)?tram:chuc;
	max=(max>donvi)?max:donvi;



	getch();
}