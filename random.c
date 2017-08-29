#include<stdio.h>
int main()
{
int i,n;
printf("ten random numbers in[1,100]");
for(i=0;i<=n;i++)
{
n=rand()%100+1;
printf("%d\n",n);
}
return 0;
}
