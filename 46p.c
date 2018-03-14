#include<stdio.h>
int main()
{
int angle;
float b;
printf("enter the angle:");
scanf("%d",&angle);
b=sin((angle*3.14)/180);
printf("sin value is %f",b);
return 0;
}
