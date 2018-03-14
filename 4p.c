#include<stdio.h>
#include<String.h>
int main()
{
char s[100];
printf("enter the string:\n");
scanf("%s",&s);
printf("%s",strcat(s,"."));
return 0;
}
