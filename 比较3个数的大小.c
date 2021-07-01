#include<stdio.h>
void f1(void);
int main(void)
{
	printf("请输入三个整数\n");
	f1();
}
void f1(void)
{
	int num1,num2,num3,num;
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1 >= num2 && num1 >= num3)
		num = num1;
	if(num2 >= num1 && num2 >= num3)
		num = num2;
	if(num3 >= num1 && num3 >= num2)
		num = num3;
	printf("最大值为%d\n",num);
}
