#include <stdio.h>
#include<conio.h>
int main()
{
	char str[50];
	int i,n;
  clrscr();
	scanf("%s %d",str,&n);
	int len;
	len=strlen(str);
	for(i=n;i<=len;i++)
	{
		printf("%c",str[i]);
	}
getch();
	return 0;
}
