#include <stdio.h>
#include<conio.h>
void main()
{
int s=0,n,m,remainder;
clrscr();
printf("enter value");
scanf("%d",&n);
while(n>0)
{
    remainder=n%10;
    s=s+remainder*remainder*remainder;
    n=n/10;
}
if(m==s)
{
    printf("armstrong");
}
else
{
    printf("not armstrong");
}
getch();
}
