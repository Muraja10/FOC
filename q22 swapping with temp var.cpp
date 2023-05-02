#include<stdio.h>
using namespace std;
int main()
{
	int a,b,t;
	printf("enter the a:");
	scanf("%d",&a);
	printf("enter the b:");
	scanf("%d",&b);
	t=a;
	a=b;
	b=t;
	printf("after swapping a is %d and b is %d",a,b);
	return 0;
}
