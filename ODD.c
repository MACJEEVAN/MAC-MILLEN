#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
    for(i=1;i<6;i++)
    {
        if((i%2==0)&&(i!=1))
        {
            printf("%d ",i);
        }
    }
getch();
}
