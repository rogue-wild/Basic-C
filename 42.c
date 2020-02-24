#include<stdio.h>

int main()
{
	int i,j,r,c,d1=0,d2=0,a[10][10];
	printf("Name: Vishnu Bhagwat\n");
    printf("Roll. No.: 41913202718\n\n");
	printf("Enter no. of rows of the matrix:");
	scanf("%d",&r);
	printf("Enter no. of columns of the matrix:");
	scanf("%d",&c);
	printf("Enter Elements of matrix:\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

	for(i=0;i<r;++i)
		for(j=0;j<c;++j)
		{
			scanf("%d",&a[i][j]);
			if(i==j)
				d1+=a[i][j];
			if((i+j)==(c-1))
				d2+=a[i][j];
		}

		 printf("The matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

	printf("\nFirst Diagonal Sum=%d",d1);
	printf("\nSecond Diagonal Sum=%d",d2);

	return 0;
}
