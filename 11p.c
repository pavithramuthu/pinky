#include<stdio.h>
#include<string.h>
int main()
{
char a[10];

printf("enter the day:\n");
scanf("%s",&a);
if(a[0]=='s'||a[0]=='S')
{
printf("Yes!!it is holiday");
}
else
{
printf("not a holiday");
}
return 0;
}
