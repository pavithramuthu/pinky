#include<stdio.h>
int main()
{
char c;
printf("enter the STRING");
scanf("%c",&c);
if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
{
printf("it has vowel");
}
else
{
printf("it has no vowel");
}
return 0;
}
