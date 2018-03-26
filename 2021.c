#include <stdio.h>
#include<conio.h>
int main() 
{
	int num,i;
  clrscr();
	scanf("%d",&num);
	int num1,rem;
	while(num!=1)
	{
	rem=num%2;
	num1=num/2;
	printf("%d\n",num1);
	num=rem;
	break;
	}
  getch();
	return 0;
}
