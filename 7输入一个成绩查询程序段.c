#include<stdio.h>
int main(void)
{
	int num;
	printf("请输入你的成绩\n");
	scanf("%d",&num);
	if(num > 100 || num < 0)
		printf("爬\n");
	else if(num >= 90 && num <= 100)
		printf("陈独秀都没你秀\n");
	else if(num >= 80)
		printf("ok\n");
	else if(num >= 60)
		printf("及格\n");
	else
		printf("不及格\n");
	return 0;
}
