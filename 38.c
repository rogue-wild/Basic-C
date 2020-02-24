//To find the cube of an input number using function...

#include<stdio.h>

 int cube(int num);

 int main()
{ int num,c;
 printf("Name: Vishnu Bhagwat\n");
 printf("Roll. No.: 41913202718\n\n");
 printf("Enter any number:\t");
 scanf("%d",&num);
 c=cube(num);
 printf("Cube of the number is: %d",c);
 return 0;
 }
 int cube(int num)
 {
     return(num*num*num);
 }
