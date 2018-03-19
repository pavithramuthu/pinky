#include<stdio.h>
int main()
{
int a,b,i;
printf("enter the limit:\n");
scanf("%d%d",&a,&b);
printf("the prime numbers within the limit\n");
for(i=a+1;i<b;i++)
{
if(i%(a&&b)==0&&i%2!=0)
{
printf("%d\n",i);
}
}
return 0;
}
