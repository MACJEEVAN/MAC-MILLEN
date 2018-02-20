#include<stdio.h>
#include<conio.h>
void main()
{
int h,h1,h2,m1,m2,m;
clrscr();
printf("Enter the value of hours");
scanf("%d%d",&h1,&h2);
printf("Enter the minutes");
scanf("%d%d",&m1,&m2);
h=h1-h2;
m=m1-m2;
printf("the subtracted value is %d %d",h,m);
getch();
}
