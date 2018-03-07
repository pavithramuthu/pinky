#include<stdio.h>
int main()
{
int a,d,n;
printf("enter the first term:");
scanf("%d",&a);
printf("enter difference:");
scanf("%d",&d);
printf("enter no of terms:");
scanf("%d",&n);
int sum=0,i;
for(i=0;i<n;i++)
{
sum=sum+(a+i*d);
}
printf("%d",sum);
return 0;
}
