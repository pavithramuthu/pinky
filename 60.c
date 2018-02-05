#include<stdio.h>
int main()
{
int n,i;
int a=0,b=1,c;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(i<=1)
{
printf("%d",i);
}
else
{
a=b;
b=c;
c=a+b;
printf("%d",c);
}
}
return 0;

}
