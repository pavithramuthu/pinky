#include<stdio.h>
int main()
{
char str1[25],str2[25];
int i;
printf("enter the string:");
gets(str1);
gets(str2);
i=0;
while(str1[i]==str2[i]&&str1[i]!='\0')
i++;
if(str1[i]>str2[i])
printf("str1>str2");
else if(str1[i]<str2[i])
printf("str1<str2");
else
printf("str1=str2");
return 0;
}
