#include<stdio.h>
#include<conio.h>
void main()
{
int n,temp,i,j,a[20];
clrscr();
printf("enter the array of numbers");
scanf("%d",&n);
printf("enter the nu mbers");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<=n;i++)
{
    printf("%d%d",a[i],i);
}
getch();
return 0;
}
