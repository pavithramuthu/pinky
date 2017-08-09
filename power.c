#include<stdio.h>
int main()
{
int a,b,c,result=1;
printf("enter a and b:");
scanf("%d%d",&a,&b);
for(c=0;c<b;c++)
{
result=result*a;
}
printf("%d^%d=%d",a,b,result);
return 0;
}
