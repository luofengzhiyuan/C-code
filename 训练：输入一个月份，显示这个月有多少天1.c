#include<stdio.h>
int main(void)
{
	int month,days,years;
	printf("请输入：\n");
	scanf("%d",&month);
	if(month <= 12 && month >= 1)
	{
		if(month == 2)	
		{
			printf("请输入对应年份\n");
			scanf("%d",&years);
			if(years / 4 == 0 || years / 400 == 0 && years / 100 != 0)
			{
				days = 29;
				printf("%d\n",days);
			}
			else
			{
				days = 28;
				printf("%d\n",days);
			}
		}
		else
		{
			if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			{
				days = 31;
				printf("%d\n",days);	
			}
			else 
			{
				days = 30;
				printf("%d\n",days);
			}
		}
		
	}
	else
		printf("输入错误\n");
	return 0;
}
