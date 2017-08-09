#include<stdio.h>
int main()
{
int num,i,count,n;
printf("enter the max range");
scanf("%d",&n);
for(num=1;num<=n;num++)
{
count=0;
for(i=2;i<=n/2;i++)
if(num%i==0)
{
count++;
}
if(count==0&&num!=1)
{
printf("%d",num);
}
return 0;
}
}
