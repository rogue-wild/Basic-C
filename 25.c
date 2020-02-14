/* To print a pattern 5 4 3 2 1
                        4 3 2 1
                          3 2 1
                            2 1
                              1   */

#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	int num;
	
	for (i=5;i>0;i--)
	{
		for (j=i;j>0;j--)
		{	
			printf("%d ",j);
		}
		printf("\n");
	}
}
