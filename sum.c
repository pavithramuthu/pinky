#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter the integer");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("sum of n natural number is =%d",sum);
return 0;
}
