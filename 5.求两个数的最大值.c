#include<stdio.h>
int main(void)
{
	int num1,num2;
	printf("请输入两个数\n");
	scanf("%d%d",&num1,&num2);
	if(num1<=num2)
		num1=num2;
	printf("最大值是%d\n",num1);
	return 0;
}
