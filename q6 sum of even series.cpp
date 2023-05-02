#include<stdio.h>
using namespace std;
int main()
{
	int n,sum=0;
	printf("enter the n:");
	scanf("%d",&n);
	for(int i=2;i<=n;i+=2)
	{
		sum+=i;
	}
	printf("%d",sum);
	return 0;
}
