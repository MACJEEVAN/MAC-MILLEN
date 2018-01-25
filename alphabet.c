#include<stdio.h>
#include<conio.h>
void main()
{
char v;
printf("enter the character:");
scanf("%c",&v);
if((v>='a'&&v<='z')||(v>='A'&&v<='Z'))
printf("%c is alphabet",&v);
else
printf("%c is not alphabet",&v);
getch();
}
