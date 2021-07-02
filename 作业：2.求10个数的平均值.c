#include<stdio.h>
int f1(void);
int average(void);
int main(void)
{
	printf("请输入十个数\n");
	average();
	return 0;
}
int f1(void)
{
	int num[10],i,a;
	int n = 0;
	for(i = 0;i < 10;i++)
	{
		scanf("%d",&a);
		num[i]=a;
		n += num[i];
	}
	return n;
}
int average(void)
{
	printf("平均数为%lf\n",(double)f1()/10);
}
