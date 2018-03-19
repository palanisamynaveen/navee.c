
#include <stdio.h>
#include<conio.h>
#include<string.h>
int main() 
{
	char str[50];
	int i,flag=0;
  clrscr();
	printf("\nenter the string:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==str[i+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}
  getch();
	return 0;
}
