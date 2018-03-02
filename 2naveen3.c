#include <stdio.h>
#include<conio.h>
int main() 
{
int n;
clrscr();
printf("enter the number:");
scanf("%d",&n);
if(n>=1 && n<=10)
{
printf("\n yes");
}
else
{
printf("\n no");
}
getch();
return 0;
}
