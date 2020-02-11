#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,ch=1;
	for (i=0;i<8;i++)
	{
		j=9;
		for (j;j>i;j--)
		{	
			if(i%2==0)
				printf("%d ",j);
			else	
				printf("%d ",ch);	
		}
		if(i%2!=0)
			ch=ch+2;
		printf("\n");
	}
}
