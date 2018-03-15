#include <stdio.h>
#include<conio.h>
void main() 
{
int num,f1=-1,f2=1,f3,i;
clrscr();
scanf("%d",&num);
for(i=0;i<=num;i++)
{
f3=f1+f2;
f1=f2;
f2=f3;
if(f3!=0)	
printf("%d ",f3);
}
getch();
}
