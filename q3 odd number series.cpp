#include<stdio.h>
using namespace std;
int main()
{
	int n;
	printf("enter the n:");
	scanf("%d",&n);
	for(int i=1;i<=n;i+=2)
	{
		printf("%d" ,i);
		printf("\n");
	}
	return 0;
}
