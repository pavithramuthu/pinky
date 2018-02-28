#include<stdio.h>
int main()
{
int a,b,i;
int gcd;
printf("enter the numbers: \n");
scanf("%d%d",&a,&b);
for(i=1;i<=a&&i<=b;i++)
{
if(a%i==0&&b%i==0)
{
gcd=i;
}
}
printf("gcd of %d and %d is: \n%d",a,b,gcd);
return 0;
}
