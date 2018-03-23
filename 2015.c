#include<stdio.h>

#include<conio.h>


int main()



{



int num,i,flag=0;
clrscr();


scanf("%d",&num);



for(i=2;i<=num/2;i++)



{



if(num%i==0)



{



flag=1;



break;



}
}
if(flag==0)
{
printf("\n no");
}
else
{
printf("\n yes");
}
return 0;
