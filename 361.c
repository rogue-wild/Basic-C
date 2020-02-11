#include<stdio.h>

int main()
{
    int a[12][12];
    int i,j,r,c,d1=0,d2=0;
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

    printf("The matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //To add diagonal elements
    printf("\nDiagonal elements:\t\n\t\n") ;

   for(i=0; i<r; i++)
  {
   for(j=0; j<c; j++)
   {
    if((i!=j) && (i+j)!=2)
    {
     printf("\t") ;
    }
    else
    printf("%d\t",a[i][j]) ;
  }
  printf("\n") ;
 }
  for(i=0; i<r; i++)
  {
    d1=d1+a[i][i] ;
    d2=d2+a[i][r-i-1] ;
  }
  printf("\nSum of right diagonal: %d \n\nSum of left diagonal: %d ",d2,d1) ;
  return 0;
}
