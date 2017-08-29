#include<stdio.h>
int main()
{
int m,n,i,gcd;
printf("enter the numbers:");
scanf("%d%d",&m,&n);
for(i=0;i<=m&&i<=n;++i)
{
if(m%i==0&&n%i==0)
gcd=1;
printf("gcd of %d and %d is %d",m,n,gcd);
return 0;
}
}
