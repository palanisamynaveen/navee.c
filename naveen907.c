#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e,f;
printf("enter the number");
scanf("%d",&a)
b=a%100;
c=b%10;
d=c%10;
e=d%10;
f=(b*b*b)+(c*c*c)+(e*e*e);
if(c==f)
{
printf("the number is armstrong number")
}
else
{
printf("the number is not a armstrong number ");
}
getch();
return 0;
}
