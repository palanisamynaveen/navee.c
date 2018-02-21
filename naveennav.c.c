#include <stdio.h>
#include<conio.h>
int main() 
{
char str[50];
int i,count=0;
clrscr();
printf("enter the sentence:");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
count=count+1;
}
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
count=count-1;
}
}
printf("\nthe number of characters in the line are:%d",count);
getch();
return 0;
}
