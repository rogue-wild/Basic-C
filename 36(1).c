#include<stdio.h>
#include<conio.h> 
 
int main(void)
{
	int a[5][5],sum1=0,sum2=0,r,c,i,j;
	printf("Enter size of the square matrix(row and columns):");
	scanf("%d",&r);
	scanf("%d",&c);
	if(r==c)
		printf("\nEnter the Matrix:\n");
		for(i=0;i<r;i++)
		{	for(j=0;j<r;++j)
			{	scanf("%d",&a[i][j]);
			}
		}
		
		
		
		for(i=0;i<r;i++)
		{	for(j=0;j<r;j++)
			{	if(i==j)
					printf("%d  ",a[i][j]);
			}
		}
		printf("\n");
		for(i=0;i<r;i++)
		{	for(j=0;j<r;j++)
			{	if(i+j==(r-1))
					printf("%d  ",a[i][j]);
			}
		}
		
		
		
		for(i=0;i<r;++i)
		{	for(j=0;j<r;++j)
			{
				if(i==j)
					sum1+=a[i][j];
				if(i+j==(r-1))
					sum2+=a[i][j];
			}
		}
		printf("\nSum of 1st diagonal is %d",sum1);
		printf("\nSum of 2nd diagonal is %d",sum2);

}
