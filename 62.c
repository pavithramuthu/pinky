#include<stdio.h>
int main()
{
unsigned n;
printf("enter the number:");
scanf("%i",&n);
if(n%10==0|n%10==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
