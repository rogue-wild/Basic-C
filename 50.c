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
void copyname(struct students s, struct students s1){
int i;
for(i=0;i<gtbitstrlen(s.name);i++){
s1.name[i]=s.name[i];
}
}
int main()
{
    int i,rollno,marks,j;
    char name[100];
    struct students s[1],s1[1];
    printf(" Vikas Bishnoi \n 40913202718 \n Enter the details: ");
    for(i=0; i<1; i++)
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
copyname(s[1],s1[1]);
printf("\n Name copied: %s",s1[1].name);

}
