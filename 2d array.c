#include<stdio.h>

void main ()
{
	int i,z[5];
	int x[]= {10,20,30,40,50};
	
	int y[]= {10,10,10,10,10};
	for(i=0; i<5; i++)
	{ z[i]= x[i] + y[i];
	}
	for(i=0; i<5; i++)
	{ printf("%d", z[i]);}
	getch();
}
