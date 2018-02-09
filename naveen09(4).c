#include<stdio.h>
#include<conio.h>
int main()
{
int n,a,d,s,ans=0,i;
clrscr();
scanf("%d%d%d",&d,&n,a);
for(i=1;i<=n;i++)
{
s=a+(i-1)*d;
ans=ans+s;
printf"%d",ans);
}
return 0;
}
