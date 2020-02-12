//Grading system according to marks scored in various subjects...

#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c,d,e,avg ;
    char grade;
    printf("Name: Vishnu Bhagwat\n");
printf("Roll. No.: 41913202718\n\n");

    printf("\nEnter marks of 5 subjects\n");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);

    if(a>100 || b>100 ||c>100 ||d>100 ||e>100)
        printf("\nERROR - Marks cannot exceed 100");
    else
        avg=(a+b+c+d+e)/5;
        if(avg>90)
            grade='A';
        else if(avg<=90&&avg>80)
            grade='B';
        else if(avg<=80&&avg>70)
            grade='C';
        else if(avg<=70&&avg>60)
            grade='D';
        else if(avg<=60&&avg>50)
            grade='E';
        else
            grade='F';
        printf("\nThe grade of the marks of 5 subjects is %c",grade);
getch();
}


