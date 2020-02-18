//To make a calculator...

#include<stdio.h>
#include<conio.h>

int main()
{
	int num1,num2;
	float res;
	char ch;
	printf("Vishnu Bhagwat \n41913202718");
	
	printf("\nEnter operation (+,-,/,*) \n");
	scanf("%c",ch);
	
	printf("\nEnter numbers \n");
	scanf("%d %d",&num1,&num2);
	
	switch(ch)
	{
		case '+':
			res=num1+num2;
			printf("%f",res);
			break;
		case '-':
			res=num1-num2;
			printf("%f",res);
			break;
		case'*':
			res=num1*num2;
			printf("%f",res);
			break;
		case '/':
			res=num1/num2;
			printf("%f",res);
			break;
		default:
			printf("Wrong Choice");
			break;		
	}
}
