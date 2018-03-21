#include <stdio.h>
#include<conio.h>
int main() 
{
	int i,n,k,array[20];
  clrscr();
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=1;i<=n;i++)
	{
		while(i==k)
		{
			printf("\n%d",array[i]);
			break;
		}
	}
  getch();
	return 0;
}
