#include<stdio.h>
int main()
{
char ch[50];
int i,k;
printf("enter something:");
scanf("%s",&ch);
k=strlen(ch);
for(i=0;i<k;i++)
{
if(i%2==0)
{
printf("%c",ch[i]);
}
}
for(i=0;i<k;i++)
{
if(i%2==1)
{
printf(" \n %c",ch[i]);
}
}
return 0;
}
