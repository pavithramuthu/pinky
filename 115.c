#include<stdio.h>
int main()
{
int n,k,i,j,t;
int a[100],c=0;
printf("enter n and k values:");
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=i+1;j<n;i++)
{
if(a[i]>a[j])
t=a[i];
a[i]=a[j];
a[j]=t;
}
printf("%d",a[k-1]);
return 0;
}
