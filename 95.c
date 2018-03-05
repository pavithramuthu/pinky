#include<stdio.h>
int main()
{
float p,r,a;
int n;
printf("enter the principle amount:\n");
scanf("%f",&p);
printf("enter the time:\n");
scanf("%d",&n);
printf("enter the rate:\n");
scanf("%f",&r);
a=((p*n*r)/100);
printf("floor value %f",floor(a));
return 0;
}
