#include<stdio.h>
main()
{
int h,m,tm;
printf("enter the hours and minutes:");
printf("hours:");
scanf("%d",&h);
printf("minutes:");
scanf("%d",&m);
tm=(h*60)+m;
printf("total minutes:\t%d",tm);
return 0;
}
