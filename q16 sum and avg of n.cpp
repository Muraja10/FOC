#include<stdio.h>
using namespace std;
int main()
{
	int n,sum=0,avg=0;
	printf("enter the n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	avg=sum/n;
	printf("%d",sum);
	printf("\n");
	printf("%d",avg);
	return 0;
}
