#include<stdio.h>
#include<conio.h>

int main()
{
	int ar[10],i;
	printf("Vikas Bishnoi \n40913202718");
	printf("\nEnter elements in array\n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",ar[i]);
	}
	for(i=2;i<=10;i++)
	{
		if(ar[1]<ar[i])
			ar[1]=ar[i];
	}
	
	for(i=3;i<=10;i++)
	{
		if(ar[2]>ar[i])
			ar[2]=ar[i];
	}
	printf("\nLargest element in array is %d",ar[1]);
	printf("\nLargest element in array is %d",ar[2]);
}
