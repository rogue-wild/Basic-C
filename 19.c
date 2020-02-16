//To copy a string...

#include<stdio.h>
int gtbitstrlen(char a[]){
int n=0;
while(a[n]!='\0'){
n++;}
return n;
}
void gtbitstrcopy(char a[],char b[]){
int i;
for(i=0;i<gtbitstrlen(a);i++){
b[i]=a[i];}
}
void gtbitstrcat(char a[],char b[], char c[]){
int i,j;
for(i=0;i<gtbitstrlen(a);i++){
c[i]=a[i];}
for(j=0;j<gtbitstrlen(b);j++){
c[i+j]=a[j];}
}
int main(){
char a[100],b[100],c[100];
int n,i,v=0;
printf(" Vishnu Bhagwat\n 41913202718 \n Enter the string: ");
scanf("%s",a);
printf("\n");
printf("\n Length of string: %d",gtbitstrlen(a));
gtbitstrcopy(a,b);
printf("\n");
printf("\n Copied string: %s",b);
gtbitstrcat(a,b,c);
printf("\n");
printf("\n Joined strings: %s",c);
}
