#include<stdio.h>
int main()
{
int a;
printf("enter the number:");
scanf("%d",&a);
if(a%2==0)
{
printf("%d",a);
}
else
{
printf("%d",a-1);
}
return 0;
}
