#include <stdio.h>
#inclued<conio.h>
int main()
{
	int min;
	int h,m;
  clrscr();
	scanf("%d",&min);
	h=min/60;
	m=min%60;
	printf("the hour is %d\n",h);
	if(min%60==0)
	{
	printf("the minutes is 0" );
	}
	else
	printf("the minutes is %d",m);
  getch();
	return 0;
}
