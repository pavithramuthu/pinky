#include<stdio.h>
int main()
{
int num,i,count=0,a=1,b=2;
scanf("%d",&num);
while(num!=1)
{
num=num/2;
count++;
}
printf("%d \n",count);
for(i=0;i<count+1;i++)
{
a=a*b;
}
printf("%d \n",a);
return 0;
}
