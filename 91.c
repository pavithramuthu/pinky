#include<stdio.h>
int main()
{
int l,b,h,v,t;
printf("enter length,breadth and heigh of a cuboid:\n");
scanf("%d%d%d",&l,&b,&h);
v=l*b*h;
t=2*(l*b+b*h+h*l);
printf("volume of cuboid %d\n",v);
printf("total surface area of cuboid %d",t);
return 0;
}
