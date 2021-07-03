#include<stdio.h>
int main(void)
{
	int num1,num2;
	printf("请输入两个10以内的整数计算加减乘除：\n");
	scanf("%d%d",&num1,&num2);
	if(num1<=10&&num1>=0)
	{
		if(num2<=10&&num2>=0)
		{
			if(num1>=num2)
			{
			printf("%d加%d=%d\n",num1,num2,num1+num2);
			printf("%d乘%d=%d\n",num1,num2,num1*num2);
			printf("%d减%d=%d\n",num1,num2,num1-num2);
			printf("%d除%d=%d余数为：%d\n",num1,num2,num1/num2,num1%num2);
			}
			if(num1<num2)
			{
			printf("%d加%d=%d\n",num1,num2,num1+num2);
			printf("%d乘%d=%d\n",num1,num2,num1*num2);
			printf("%d减%d小学阶段不涉及\n",num1,num2);
			printf("%d除%d小学阶段不涉及\n",num1,num2);
			}
		}
		else
			printf("输入错误\n");
	}
		else
		printf("输入错误\n");
	return 0;
}
