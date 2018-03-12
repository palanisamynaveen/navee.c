#include <stdio.h>



int main(d) 

{

	char str[50];
  clrscr();

	int i,count=1;

	printf("enter the sentence:");

	scanf("%[^\n]s",str);

	for(i=0;str[i]!='\0';i++)

	{

		if(str[i]==' ')

		{

			count=count+1;

		}

	}

	printf("\nno of words=%d",count);

	return 0;

}
