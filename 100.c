#include<stdio.h>
int main()
{
int n,i,a[10];
int mul=1;
printf("no.of elements:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
{
for(i=0;i<n;i++)
mul=mul*a[i];
printf("product \n%d",mul);
}
return 0;
}
