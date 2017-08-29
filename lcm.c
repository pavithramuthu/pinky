#include<stdio.h>
int main()
{
int m,n,minMultiple;
printf("enter the numbers:");
scanf("%d%d",&m,&n);
minMultiple=(m>n)?m:n;
while(1)
{
if(minMultiple%m==0 && minMultiple%n==0)
{
printf("lcm of %d and %d is %d",m,n,minMultiple);
break;
}
++minMultiple;
}
return 0;
}
