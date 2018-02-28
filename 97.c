#include<stdio.h>
int main()
{
int n,r=0,rm;
printf("enter the numbers: \n");
scanf("%d",&n);
while(n!=0)
{
rm=n%10;
r=(r*10)+rm;
n=n/10;
}
printf("the reversed number is \n%d",r);
return 0;
}
