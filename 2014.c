#include <stdio.h>
#include<conio.h>
int main() 
{
	float p,r,result;
	int si,n;
  clrscr():
	scanf("%f %d %f",&p,&n,&r);
	result=((p*n*r)/100);
	si=floor(result);
	printf("\n%d",si);
  getch();
	return 0;
}
