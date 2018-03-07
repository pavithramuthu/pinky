#include<stdio.h>
int main()
{
int a,d,n,p;
printf("enter the first term:");
scanf("%d",&a);
printf("enter difference:");
scanf("%d",&d);
printf("enter no of terms:");
scanf("%d",&n);
p=(2*a)+(n-1)*d;
printf("%d",p);
return 0;
}
