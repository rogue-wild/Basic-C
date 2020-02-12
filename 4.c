//To read a character and find whether it's uppercase or lower case or a special character using ASCII values...

#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    int d;
    printf("Name: Vishnu Bhagwat\n");
    printf("Roll. No.: 41913202718\n\n");
    printf("\nEnter a character\n");
    scanf("%c",&d);
    ch=d;

    if(ch>=97&&ch<=122)
    {
        printf("\n%c is Lowercase",ch);
        printf("\nCharacter in Uppercase is %c ",d-32);
    }
    else if(ch>=65&&ch<=90)
    {
        printf("\n%c is Uppercase",ch);
        printf("\nCharacter in Lowercase is %c ",d+32);
    }
    else
        printf("\n%c is not a letter of alphabet",ch);
    getch();
}
