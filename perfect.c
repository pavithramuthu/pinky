#include<stdio.h>
int main()
{
int num,rem,sum=0;i;
printf("enter the number:");
scanf("%d",&num);
for(i=1;i<=(num-1);i++)
{
rem = num % i;
if(rem == 0)
{
sum = sum + i;
}
}
if(sum == num)
{
printf("it is a perfect number");
}
else
{
printf("it is not a perfect number");
}
return 0;
}
