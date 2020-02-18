//To print the sum of two diagonals of a input matrix...

#include<stdio.h>

int main()
{
 int a[100][100];
 int i,j,d1=0,d2=0,n ;

 printf("Name: Vishnu Bhagwat\n");
 printf("Roll no.42513202718\n\n");
 printf("Enter number of Rows :");
    scanf("%d",&n);
    printf("Enter number of Cols :");
    scanf("%d",&n);

  for(i=0; i<n; i++)
  {
   for(j=0; j<n; j++)
   {
    printf("Enter elements of matrix:\t") ;
    scanf("%d",&a[i][j]) ;
   }
    printf("The matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
  }
  printf("\nDiagonal elements:\t\n\t\n") ;

   for(i=0; i<n; i++)
  {
   for(j=0; j<n; j++)
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
  for(i=0; i<n; i++)
  {
    d1=d1+a[i][i] ;
    d2=d2+a[i][n-i-1] ;
  }
  printf("\nSum of right diagonal: %d \n\nSum of left diagonal: %d ",d2,d1) ;
  return 0;
}
