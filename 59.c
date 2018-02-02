#include "stdio.h"

int main()
{
  int a[10],i,n,m;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     m= a[0];
     for(i=0;i<n;i++)
    {
     if(a[i]>m)
     m= a[i];
     }
     printf("largest number %d",m);
     return 0;
}
