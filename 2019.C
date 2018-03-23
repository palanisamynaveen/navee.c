#include <stdio.h>
 #include<cnio.h>
int main() 
{
	int n,remainder,product=1;
  clrscr();
	scanf("%d",&n);
	while(n!=0)
	{
		remainder=n%10;
		product=product*remainder;
		n=n/10;
	}
	printf("\n%d",product);
  getch();
	return 0;
}
