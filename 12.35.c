#include <stdio.h>
#include<string.h>
int main() 
{
	char str[30];
	int n,i;
  clrscr();
	printf("enter the string:");
	scanf("%s",str);
	n=strlen(str);
	if(n%2==0)
	{
		str[n/2]='*';
		str[(n/2)-1]='*';
	}
	else
	{
		str[n/2]='*';
	}
	printf("\n%s",str);
  getch();
	return 0;
}
