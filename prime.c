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
else
{
printf("the number is not a prime");
}
return 0;
}
