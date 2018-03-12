#include <stdio.h>
#include<conio.h>
int main() 
{
	int n;
	clrscr();
	printf("enter the number:");
	scanf("%d",&n);
	if(n%7==0)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
