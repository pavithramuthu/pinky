#include<stdio.h>
int main()
{
char str1[30],str2[30];
int i=0,j=0;
printf("enter the string1:");
scanf("%s",&str1);
printf("enter the string2:");
scanf("%s",&str2);
while(str1[i]!='\0')
i++;
while(str2[i]!='\0')
{
str1[i]=str2[i];
j++;
i++;
}
str1[i]='\0';
printf("the concatenated string is %s",str1);
return 0;
}
