#include<stdio.h>
int main()
{
char c[10];
int i,count=0;
printf("enter the STRING \n");
for(i=0;i<10;i++)
scanf("%s",&c[10]);
if(c[i]=='a'||c[i]=='A'||c[i]=='e'||c[i]=='E'||c[i]=='i'||c[i]=='I'||c[i]=='o'||c[i]=='O'||c[i]=='u'||c[i]=='U')
{
count++;
}
if(count!=0)
{
	
printf("it has vowel");
}
else
{
printf("it has no vowel");
}
return 0;
}
