#include <stdio.h>
#include<conio.h>
int main() 
{
	float l,b,a;
  clrscr();
	printf("enter the length and breadth values of the farm:");
	scanf("%f %f",&l,&b);
	a=l*b;
	printf("\n%0.5f",a);
  getch();
	return 0;
}
