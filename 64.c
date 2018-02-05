#include<stdio.h>
int main()
{
int m,n,o;
printf("enter the numbers:");
scanf("%d%d",&m,&n);
o=m+n;
if(o%2==0)
{
printf("even number");
}
else
{
printf("odd number");
}
return 0;
}
