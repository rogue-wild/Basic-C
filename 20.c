//To create a structure of student data type...

#include<stdio.h>
int gtbitstrlen(char a[])
{
    int n=0;
    while(a[n]!='\0')
    {
        n++;
    }
    return n;
}
struct students
{
    int rollno;
    char name[100];
    int marks;
};
int main()
{
    int i,rollno,marks,j;
    char name[100];
    struct students s[10];
    printf(" Vishnu Bhagwat \n 41913202718 \n Enter the details: ");
    for(i=0; i<10; i++)
    {
        scanf("%s",name);
        for(j=0;j<gtbitstrlen(name);j++){
        s[i].name[j]=name[j];
        }

        scanf("%d",&rollno);
        s[i].rollno=rollno;
        scanf("%d",&marks);
        s[i].marks=marks;
    }
     for(i=0; i<10; i++)
    {
    printf("\n");
      printf(" Name: %s",s[i].name);
      printf(" Roll. No.: %d",s[i].rollno);
      printf(" Marks: %d",s[i].marks);
      printf("\n");
    }


}
