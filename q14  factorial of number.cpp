#include<stdio.h>
using namespace std;
int main()
{
	int n,f=1;
	printf("enter the n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		f*=i;
	}
	printf("%d",f);
	return 0;
}
