#include <stdio.h>
int main() 
{
	float num;
	int x;
  clrscr();
	printf("\n enter the num:");
	scanf("%f",&num);
	x=(int)(num+0.5);
	printf("\n%d",x);
  getch();
	return 0;
}
