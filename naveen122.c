#include <stdio.h>
#include<conio.h>
int main()
{
int array[10];
int n,i,j,temp;
clrscr();
printf("\n enter the array size:");
scanf("%d",&n);
printf("\n enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
for (i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(array[i]>array[j])
{
temp=array[i];
array[i]=array[j];
array[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d ",array[i]);
}
getch();
return 0;
}
