#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	while (scanf("%d%d", &a, &b) != EOF)//EOF指系统结束 满足条件继续执行 不满足条件停止执行
	{
		printf("%d\n", a + b);//或写成int s=a+b
                                    //printf("%d\n",s)  
	}
		return 0;//需要在while的花括号外边
	
}






//int main()
//{
//	float a = 3.0 / 2;
//	
//	printf("%f\n", a );
//	return 0;
//}
//想要结果出现小数 被除数或除数必须有一个是小数