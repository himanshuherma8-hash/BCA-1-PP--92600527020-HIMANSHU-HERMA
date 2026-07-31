#include<stdio.h>
#include<conio.h>
void main()
{
	float pa,r,y,si;
	clrscr();
	printf("\n enter value of pa");
	scanf("%f",&pa);

	printf("\n enter value of r");
	scanf("%f",&r);

	printf("\n enter value of y");
	scanf("%f",&y);

		si=(pa*r*y)/100;
	printf("\n simple interest is %f",si);
	getch();
}

