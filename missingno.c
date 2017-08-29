#include<stdio.h>
 int getMissingNo (int a[], int n)
{
	int i, tot;
	tot = (n+1)*(n+2)/2; 
	for ( i = 0; i< n; i++)
	tot -= a[i];
	return tot;
}
 int main()
{
	int a[] = {1,2,3,5,6};
	int miss = getMissingNo(a,5);
	printf("%d", miss);
	getchar();
}
 
