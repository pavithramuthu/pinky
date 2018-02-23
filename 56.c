#include<stdio.h>
int main()
{

char a[10];
int i;

scanf("%s",a);

if((a[i]>='a')&&(a[i]<='z')&&(a[i]>='0')&&(a[i]<='9'))
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
