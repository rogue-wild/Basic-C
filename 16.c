//To find the area of a cirlce of a given input radius...


#include<stdio.h>

 float area(float r);

 int main()
{ float r,c;
 printf("Name: Vishnu Bhagwat\n");
 printf("Roll. No.: 41913202718\n\n");
 printf("Enter radius of circle:\t");
 scanf("%f",&r);
 c=area(r);
 printf("Area of circle is: %f",c);
 return 0;
 }
 float area(float r)
 {
     return(3.14159*r*r);
 }
