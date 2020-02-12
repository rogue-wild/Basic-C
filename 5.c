//To read a character and find whether it's uppercase or lower case or a special character...

#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
        printf("Name: Vishnu Bhagwat\n");
printf("Roll. No.: 41913202718\n\n");
    printf("\nEnter a character\n");
    ch=getchar();
    if(ch>='0'&&ch<='9')
        printf("\n%c is digit",ch);
    else if(ch>='a'&&ch<='z')
        printf("\n%c is Lowercase",ch);
    else if(ch>='A'&&ch<='Z')
        printf("\n%c is Uppercase",ch);
    else
        printf("\n%c is Special character",ch);
    getch();
}
