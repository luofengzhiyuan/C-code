#include<stdio.h>
void g();				//函数声明，在调用之前必须进行申明，否则会报错。
int f(int);				
void h(void)
{
	printf("one\n");
}
int main(void)
{
	printf("two\n");
	g();
	h();
	printf("%d\n",f(156));		//156为实参，替换形参
	return 0;
}
void g(void)			//定义函数
{
	printf("three\n");
}
int f(int a)			//int a 是形参
{
	return a*a;
}
