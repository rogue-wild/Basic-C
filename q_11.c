#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Name: Vishnu Bhagwat\n");
printf("Roll. No.: 41913202718\n\n");
printf("Enter three numbers:");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
    if(a>c)
        printf("%d is greatest",a);
    else
        printf("%d is greatest",c);
else
    if(b>c)
        printf("%d is greatest",b);
    else
        printf("%d is greatest",c);
getch();
}

