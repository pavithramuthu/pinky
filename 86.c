#include<stdio.h>
int main()
{
char s[100];
int i,flag=0,n,j;
printf("enter the string:");
scanf("%s",&s);
n=strlen(s);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
if(s[i]==s[j])
{
flag=1;
break;
}
}
if(flag==1)
{
printf("it is not a isogram");
}
else
{
printf("it is a isogram");
}
return 0;
}
