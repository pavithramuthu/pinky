#include<stdio.h>
int main()
{
int a[10],s,i,n;
printf("enter no.of elements:");
scanf("%d",&n);
printf("enter elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
s=a[0];
for(i=1;i<n;i++)
{
if(s>a[i])
{
    s=a[i];
}
}
printf("min num is %d",s);
return 0;
}
