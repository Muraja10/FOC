#include<stdio.h>
using namespace std;
int main()
{
	int n,rem,num,dig,sum=0;
	printf("enter the n:");
	scanf("%d",&n);
	num=n;
	while(num!=0)
	{
		rem=num%10;
		dig=rem;
		sum+=dig;
		printf("\n");
		num/=10;
	}
	printf("%d",sum);
	return 0;
}
