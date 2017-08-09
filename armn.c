#include<stdio.h>
int main()
{
int n,temp,rem,sum;
printf("armstrong number between 1 to 1000:");
for(n=1;n<=1000;n++)
{
temp=n;
sum=0;
while(temp>0)
{
rem=temp%10;
sum=sum+(rem*rem*rem);
temp=temp/10;
}
if(n==sum)
{
printf("%d",n);
}
return 0;
}
}
