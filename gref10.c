#include<stdio.h>
int main()
{
int a[10];
int i,greatest;
printf("enter the numbers:");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
greatest=a[0];
for(i=0;i<10;i++)
if(a[i]>greatest)
greatest=a[10];
printf("the greatest of 10 numbers is",greatest);
return 0;
}
