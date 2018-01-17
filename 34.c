#include <iostream>
#include<string.h>
using namespace std;

int main() {
	int i,n=0;
	char st[50];
	cin.getline(st,50);
	for(i=0;st[i]!='\0';i++)
	{
	    if(st[i]=='.')
	    {
	    n++;
	    }
	}
	cout<<n;
	return 0;
}
