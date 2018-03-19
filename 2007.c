#include <stdio.h>
#include<conio.h>
int main() 
{
int x,y,remainder,lcm,gcd,a,b;
clrscr():
printf("\n enter the first number:");
scanf("%d",&x);
printf("\n enter the second number:");
scanf("%d",&y);
a=x;
b=y;
do
{
remainder=x%y;
if(remainder==0)
break;
x=y;
y=remainder;
}while(remainder!=0);
gcd=y;
lcm=(a*b)/gcd;
printf("\n the lcm of the given number is: %d",lcm);
getch();
return 0;
}
