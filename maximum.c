#incude<stdio.h>
#include<conio.h>
void main()
{
int array[50],size,i,large;
clrscr();
printf("enter the size of array:");
scanf("%d",&size);
printf("\n enter %delements of array:",size);
for(i=0;i<size;i++)
scanf("%d",&array[i]);
large=array[0];
for(i=1;i<size;i++)
{
if(large<array[i])
large=array[i];
}
printf("\n large element in the array is :%d",large);
getch();
}
