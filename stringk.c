#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[300];
int k,i;
clrscr();
scanf("%s",s);
scanf("%d",&k);
for(i=0;i<k;i++,printf("\n"))
{
	printf("%s",s);
}
getch();
}
