#include<stdio.h>
#include<conio.h>
void main()
{
long long n;
int count=0;
printf("enter an integer");
scanf("%lld",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("number of digits : %d",count);
}
