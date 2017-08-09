#include<stdio.h>
int main()
{
int i,n;
printf("emter the number:");
scanf("%d",&n);
for(i=1;i<=10;++i)
{
printf("%d*%d=%d",i,n,n*i);
}
return 0;
}
