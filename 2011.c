#include <stdio.h>
#include<conio.h>
int main() 
{
int n,array[50],i,sum=0;\
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
sum=sum+array[i];	
}
printf("\n%d",sum);
getch();
return 0;
}
