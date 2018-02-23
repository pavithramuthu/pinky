#include <stdio.h>
int main()
{
int a,b;
printf("enter the number:");
scanf("%d%d",&a,&b);
if(a>b)
{
    printf("%d",a-b);
}
else
{
    printf("%d",b-a);
}
return 0;
}
