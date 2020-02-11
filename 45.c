#include<stdio.h>
void main()
{
int a[5][5],b[5][5],c[5][5],i,j,m,n;
printf(" Name: Vikas Bishnoi \n Roll. No.: 40913202718 \n");
printf("Enter m & n:");
scanf("%d %d",&m,&n);

printf(" Enter first matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",(*(a+i)+j));
}
}
printf("\nEnter second matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",(*(b+i)+j));
}
}
printf("\nAddition Matrix:\n");
for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
{
*(*(c+i)+j)=*(*(a+i)+j)+ *(*(b+i)+j);
printf("%d ",*(*(c+i)+j));
}
printf("\n");
}
}
