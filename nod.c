#include<stdio.h>
int main()
{
int num,count;
printf("enter the number:");
scanf("%d",&num);
while(num)
{
num=num/10;
count++;
}
printf("the no. of digits is %d",num);
return 0;
}
