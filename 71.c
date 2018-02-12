#include<stdio.h>
int main()
{
int num,rev=0,t;
printf("enter the number:");
scanf("%d",&num);
t=num;
while(t!=0)
{
rev=rev*10;
rev=rev+t%10;
temp=t/10;
}
if(num==rev)
{
printf("it is a palindrome");
}
else
{
printf("it is not a palindrome");
}
return 0;
}
