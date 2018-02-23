#include<stdio.h>
int main()
{
int n,i,a[10];
int sum=0;
printf("no.of elements:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
{
for(i=0;i<n;i++)
sum=sum+a[i];
printf("%d",sum);
}
return 0;
}
