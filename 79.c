#include <stdio.h>
int main()
{
int a,b,c;
printf("enter a and b values: \n");
scanf("%d%d",&a,&b);
c=a*b;
printf("the product of a and b is %d \n",c);
if(a==b)
{
	printf("it is perfect square \n");
}
else
{
	printf("it is not a perfect square \n");
}
return 0;
}
