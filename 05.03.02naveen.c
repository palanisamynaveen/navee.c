#include <stdio.h>
#include<conio.h>
int main() 
{
int array[100];
int i,n;
clrscr();
printf("enter the size of the array:\n");
scanf("%d",&n);
printf("\n the array elements are:\n");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
int max=array[0];
int min=array[0];
for(i=1;i<n;i++)
{
if(array[i]>max)
{
max=array[i];
}
if(array[i]<min)
{
min=array[i];
}
}
printf("\n%d",min);
printf("\n%d",max);
getch();
return 0;
}
