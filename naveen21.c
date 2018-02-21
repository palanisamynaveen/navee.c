#include <stdio.h>
#include<string.h>
int main(void)
{
	char n[10];
	clrscr();
	int m,i,flag;
	scanf("%s",n);
	m=strlen(n);
	for(i=0;i<m;i++)
	{
		if(n[i]>='0' && n[i]<='9')
		{
			flag=1;
		}
		else
		{
			flag=0;
			printf("no");
			break;
		}
	}
	if(flag==1)
	{
		printf("\n yes");
	}
	
   getch();
	return 0;
}
