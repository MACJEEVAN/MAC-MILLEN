#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char c[100],d[100];
int i=0,j,len1,len2,len;

scanf("%s %s",c,d);
len1=strlen(c);
len2=strlen(d);
len=len1+len2;
for(i=len1;i<len;)
{
for(j=0;j<len2;j++)
{
c[i]=d[j];
i++;
}
}
for(i=0;i<len;i++)
printf("%c",c[i]);
return 0;
}

    
