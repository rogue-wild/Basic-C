#include<stdio.h>

 int fact(int n);

 int main()
{ int n,c;
 printf("Name: Vishnu Bhagwat\n");
 printf("Roll. No.: 41913202718\n\n");
 printf("Enter any number:\t");
 scanf("%d",&n);
 c=fact(n);
 printf("factorial of %d is: %d",n,c);
 return 0;
 }
 int fact(int n)
 { int i,f=1;
 for(i=1;i<=n;i++)
     { f=f*i;
     }return(f);
 }
