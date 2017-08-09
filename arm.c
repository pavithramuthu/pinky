#include<stdio.h>
int main()
{
int arms=153;
int rem,sum=0,check;

check=arms;
while(check!=0)
{
rem=check%10;
sum=sum+(rem*rem*rem);
check=check/10;
}
if(sum==arms)
{
printf("the number is armstrong",arms);
}
else
{
printf("the number is not an armstrong",arms);
}
return 0;
}
