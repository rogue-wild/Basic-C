//To print the upper trianlge of an input matrix...

#include<stdio.h>

int main()
{
 int a[3][3],b[3][3];
 int i,j ;

 printf("Name: Vishnu Bhagwat\nRoll no.41913202718\n\n");

 for(i=0; i<3; i++)
 {
  for(j=0; j<3; j++)
  {
   printf("Enter elements of matrix:\t") ;
   scanf("%d",&a[i][j]) ;
  }
 }
 printf("\nMatrix:\t\n\t\n") ;

  for(i=0; i<3; i++)
 {
  for(j=0; j<3; j++)
  {
   printf("%d\t",a[i][j]) ;
  }
  printf("\n") ;
 }

 printf("\nUpper Triangle:\n\n") ;

   for(i=0; i<3; i++)
 {
  for(j=0; j<3; j++)
  {
   if(i<=j)
   {
   printf("%d\t",a[i][j]) ;
   }
  else
   printf("\t") ;
  }
  printf("\n") ;
 }
 return 0;
}
