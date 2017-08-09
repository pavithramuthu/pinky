#include<stdio.h>
int main()
{
int count;
printf("even numbers between 10 to 50 are:");
for(count=1;count<=50;count++)
{
if(count%2==0)
{
printf("%d",count);
}
}
return 0;
}
