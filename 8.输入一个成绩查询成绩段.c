#include<stdio.h>
int main(void)
{
	int num;				//定义一个整形变量存放成绩
	printf("请输入你的成绩\n");		//提示用户输入程序
	scanf("%d",&num);			//输入函数，输入成绩
	if(num > 100 || num < 0)		//判断成绩的范围，确定成绩合法输入范围
		printf("输入错误\n");		
	else 
		if(num >= 60 && num <= 80)
			printf("及格\n");
		if(num >= 80 && num <= 90)
			printf("优秀\n");
		if(num >=90 && num <= 100)
			printf("非常优秀\n");
		if(num < 60)
			printf("不及格\n");
	return 0;
}
