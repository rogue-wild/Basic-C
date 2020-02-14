//To find the Factorial of given input Number...

#include<stdio.h>
#include<conio.h>
void main()
{
 int fact=1,i,n ;
 clrscr();
 printf("Name: Vishnu Bhagwat\n");
 printf("Roll Number: 41513202718\n\n") ;
 printf("Enter any number:\t");
 scanf("%d",&n) ;
 for(i=1 ; i<=n ; i++)
 {
  fact = fact*i ;
 }
 printf("\nFactorial: \t%d",fact) ;
 getch();
}
