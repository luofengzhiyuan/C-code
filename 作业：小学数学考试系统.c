#include<stdio.h>
int main(void)
{
	int num1,num2;
	printf("����������������Ӽ��˳���\n");
	scanf("%d%d",&num1,&num2);
	if(num1<=10&&num1>=0)
	{
		if(num2<=10&&num2>=0)
		{
			if(num1>=num2)
			{
			printf("%d��%d=%d\n",num1,num2,num1+num2);
			printf("%d��%d=%d\n",num1,num2,num1*num2);
			printf("%d��%d=%d\n",num1,num2,num1-num2);
			printf("%d��%d=%d����Ϊ��%d\n",num1,num2,num1/num2,num1%num2);
			}
			if(num1<num2)
			{
			printf("%d��%d=%d\n",num1,num2,num1+num2);
			printf("%d��%d=%d\n",num1,num2,num1*num2);
			printf("%d��%dСѧ�׶β��漰\n",num1,num2);
			printf("%d��%dСѧ�׶β��漰\n",num1,num2);
			}
		}
		else
			printf("�������\n");
	}
		else
		printf("�������\n");
	return 0;
}