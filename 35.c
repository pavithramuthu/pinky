#include <stdio.h>
#include<string.h>
int main(void) {
	char a[50];
    int i,n=0,c=0;
    scanf("%s",a);
    n=strlen(a);
     for(i=0;i<n;i++)
{
if(a[i]>='0' && a[i]<='9')
c++;
}
printf("%d",c);
	return 0;
}
