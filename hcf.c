#include<stdio.h>
int main()
{
int a,b,i,hcf;
printf("enter the numbers:");
scanf("%d%d",&a,&b);
for(i=0;i<=a&&i<=b;++i)
{
if(a%i==0&&b%i==0)
hcf=1;
printf("hcf of %d and %d is %d",a,b,hcf);
return 0;
}
}
