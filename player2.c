#include<stdio.h>
#include<conio.h>
void main()
{
	int n, j,a=1;
  clrscr();
	printf("Enter no.");
	scanf("%d",&n);
	for(j=1; j<=n;j++)
	{
		a=a*j;
	
	}
	printf("%d",a);
  getch();
}
