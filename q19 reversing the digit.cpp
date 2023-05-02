#include<stdio.h>
using namespace std;
int main()
{
	int n,rem,num,dig;
	printf("enter the n:");
	scanf("%d",&n);
	num=n;
	printf("the reversed integer is: ");
	while(num!=0)
	{
		rem=num%10;
		dig=rem;
		printf("%d",dig);
		num/=10;
	}
	return 0;
}
