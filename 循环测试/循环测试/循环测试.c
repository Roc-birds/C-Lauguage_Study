#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//循环的妙用 求一个数的阶乘 循环嵌套
int main()
{
	int a = 0;
	int i = 1;
	while (scanf("%d", &a) != EOF)//大循环
	{
		int pro = 1;
		i = 1;
		while (i <= a)//小循环 循环数的阶乘
		{
			pro = pro * i;//实现数的阶乘
			i++;

		}
		printf("%d\n", pro);
		
	}
	return 0;
}








//复制一句话                                                      能改成for循环
//int main()                                                        
//{
//	int a = 1;
//	while(a<=15)//不能加双引号                                      for(int a=1,a<=15,a++)
//	{                                                              { printf("双月瀚鸟\n");}     
//		printf("双月瀚鸟\n");
//		a += 1;//a = a + 1相当于a+=1
//	}
//
//	return 0;
//}