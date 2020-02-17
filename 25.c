//To create a function to swap input numbers... 

#include<stdio.h>
void swap(int *a,int *b){
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
}
int main()
{
    int n,m,z;
    printf(" Name: Vishnu Bhagwat \n Roll. No.: 41913202718 \n");
    printf(" Enter numbers: ");
    scanf(" %d\t%d",&n,&m);
    printf("\n Numbers are %d and %d",n,m);
    swap(&n,&m);
    printf("\n Final number after swaping are %d and %d",n,m);
    printf("\n\n");
    return 0;
}

