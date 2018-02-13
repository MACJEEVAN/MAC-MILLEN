#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
printf("enter n value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(i%n==1)
printf("%d\n",i)
}
getch();
}
