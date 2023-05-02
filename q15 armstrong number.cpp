#include<stdio.h>
using namespace std;
int main()
{
	int n,sum=0,rem,num;
	printf("enter the n:");
	scanf("%d",&n);
	num=n;
	while(num!=0)
	{
		rem=num%10;
		sum+=rem*rem*rem;
		num/=10;
	}
	if(sum==n)
	{
	printf("armstrong number");
    }
    else
	{
    	printf("not an armstrong number");
	}
	return 0;
}
