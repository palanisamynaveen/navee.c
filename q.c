#include <stdio.h>
#include<conio.h>
int main(void) 
{
	char s[50];
	int i,count=0;
	clrscr();
	printf("enter the string:");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			count=count+1;
		}
	}
	printf("\n%d",count);
	getch();
	return 0;
}
