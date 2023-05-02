#include<stdio.h>
using namespace std;
int main()
{
	int n,sum=0,j;
	printf("enter the n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		j=i*i;
		sum+=j;
	}
	printf("%d",sum);
	return 0;
}
