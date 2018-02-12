#include<stdio.h>
int main()
{
int n,i,c=0;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
c++;
}
}
if(c==2)
{
printf("the number is prime");
}
if(c!=2)
{
printf("the number is composite");
}
return 0;
}
