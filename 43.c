#include<stdio.h>
int sumofdigits(int n){
if(n==0){
return 0;
}
return n%10+sumofdigits(n/10);
}
int main()
{
    int n;
    printf(" Name: Vikas Bishnoi \n 40913202718 \n Enter a Number: ");
    scanf(" %d",&n);
    printf(" Sum of digits are: %d",sumofdigits(n));
    printf("\n\n");
    return 0;
}

