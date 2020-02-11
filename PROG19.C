#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n ;
 clrscr();
 printf("Name: Tushar Malhotra\n");
 printf("Roll Number: 42513202718\n\n") ;
 printf("Enter any number:\t");
 scanf("%d",&n) ;
 for(i=2 ; i<n ; i++)
 {
  if(n%i==0)
  {
   printf("\nNot a Prime Number:\t%d",n) ;
   goto end;
  }
 }
  printf("\nIt is a Prime Number:\t%d",n) ;
  end:
  getch();
}