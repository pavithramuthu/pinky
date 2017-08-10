#include<stdio.h>
int main()
{
int x,y,z;
printf("enter the number:");
scanf("%d%d%d",&x,&y,&z);
if(x>y&&x>z)
{
printf("x is greater");
}
else if(y>z)
{
printf("y is greater");
}
else
{
printf("z is greater");
}
return 0;
}
