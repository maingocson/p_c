#include "stdio.h"
#include "conio.h"

void main()
{
	clrscr();
	int sodau=36,sochan=100;
	int i,j;//i la so con ga, j la so con cho
	for(i=1;i<=sodau;i++)
	{
		for(j=1;j<=sochan;j++)
		{
			if(i*2+j*4==sochan && i+j==sodau)
			{
				printf("So ga: %d ,  so cho la : %d",i,j);
			}
		}
	}
	getch();
}

