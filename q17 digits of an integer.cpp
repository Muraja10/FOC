#include<stdio.h>
using namespace std;
int main()
{
	int n,rem,num,dig;
	printf("enter the n:");
	scanf("%d",&n);
	num=n;
	while(num!=0)
	{
		rem=num%10;
		dig=rem;
		printf("dgit is : %d",dig);
		printf("\n");
		num/=10;
	}
	printf("\n");
	return 0;
}
