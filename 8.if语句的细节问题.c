#include<stdio.h>
int main(void)
{
  int num;
  scanf("%d",&num);
  if(num > 0)
    printf("金");
  if(num < 0)
     printf("木\n");
  else
  {
    printf("水\n");
  }
  return 0;
}
