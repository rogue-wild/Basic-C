#include<stdio.h>
#include<conio.h>

int main()
{
	int x,n,i,j,fact=1;
	float sum=0,ser;
	printf("Vikas Bishnoi \n40913202718");
	printf("\nEnter Value of X - ");
	scanf("%d",&x);
	printf("\nEnter Value of N - ");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=i;j=j*2)
		{
			fact=fact*j;
		}
		ser=x/fact;
		printf("%f ,",ser);
		sum=sum+ser;
	}
	printf("\n%f",sum);
	return 0;
}
