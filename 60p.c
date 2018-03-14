#include<stdio.h>
int main()
{
char a[10],b[10];
int l1,l2,i;
printf("enter sring1:\n");
scanf("%s",&a);
printf("enter string 2:\n");
scanf("%s",&b);
l1=strlen(a);
l2=strlen(b);
for(i=0;i<l1&&l2;i++)
{
if(a[i]==b[i])
{
printf("yes");
break;
}
else
{
printf("no");
break;
}
}
return 0;
}
