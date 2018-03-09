#include <stdio.h>
#include<conio.h>
int main() 
{
int array[20];
clrscr();
int n,i,max=array[0];
printf("enter the number of elements:");
scanf("%d",&n);
printf("\n enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for(i=0;i<n;i++)
{
if(array[i]>max)
{
max=array[i];
}
}
printf("\nthe maximum of the numbers is:%d",max);
getch();
return 0;
}
