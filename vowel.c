#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter the letter:",ch);
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
printf("vowel");
}
else
{
printf("consonent");
}
getch();
}
