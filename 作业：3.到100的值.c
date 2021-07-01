#include<stdio.h>
int main(void)
{
	int i;
	int num = 0;
	for(i = 1;i<=100;i++)
	{
		num += i;
	}
	printf("1到100的值为%d\n",num);
}
