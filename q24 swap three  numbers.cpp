#include<stdio.h>
using namespace std;
int main()
{
	int a,b,c,t;
	printf("enter the a:");
	scanf("%d",&a);
	printf("enter the b:");
	scanf("%d",&b);
	printf("enter the c:");
	scanf("%d",&c);
	t=a;
	a=c;
	c=b;
	b=t;
	printf("after swapping a is %d and b is %d and c is %d",a,b,c);
	return 0;
}
