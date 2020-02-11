#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k;
	char ch,ch2;
	
	for (i=1;i<=5;i++)
	{
		ch='A';
		ch2='E';
		for (j=0;j<=5-i;j++)
		{
			printf("%c ",ch);
			ch++;
		}
		
		
		for (j=0;j<=5-i;j++)
		{
			printf("%c ",ch2);
			ch2--;
		}
		j++;
		printf("\n");
	}

}
