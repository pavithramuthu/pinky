#include<stdio.h>
int main()
{
int n,i,j,temp;
printf("enter the number:");
scanf("%d",&n);
j=n*5;
for(i=0,temp=0;i<j;i++,temp++)
{
if(temp!=5)
{
printf("*");
}
else
{
printf("\n*")
temp=0;
}
}
return 0;
}
