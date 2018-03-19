#include<stdio.h>
int main()
{
int i,l,t;
char s[100];
printf("enter the string:\n");
scanf("%s",&s);
l=strlen(s);
if(l%2==0)
{
for(i=0;i<l;i+=2)
{
t=s[i];
s[i]=s[i+1];
s[i+1]=t;
}
printf("%s",s);
}
else
{
for(i=0;i<l;i+=3)
{
t=s[i];
s[i]=s[i+1];
s[i+1]=t;
}
printf("%s",t);
}
return 0;
}
