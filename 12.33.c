#include<stdio.h>
#include<conio.h>

int main() 
{
	int n,l,r;
  clrscr();
	printf("\n enter the number:");
	scanf("%d",&n);
	printf("\n enter the left and right range:");
	scanf("%d %d",&l,&r);
	if(n>l && n<r)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
