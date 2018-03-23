#include <stdio.h>
 #innclude<conio.h>
int main() 
{
	int a,b,c,mod;
	scanf("%d %d %d",&a,&b,&c);
	mod=((a*b)%c);
	printf("\n%d",mod);
	return 0;
}
