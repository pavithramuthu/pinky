#include <stdio.h>
int main()
{
	int i=1;
            int n;
	printf("enter the number");
	scanf("%d",&n);
	
	while(n%10!=0)
	{
		n=n+i;
		
	}
	printf("%d",n);
	return 0;
	
}
