#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double c, m, l, e;
    scanf("%lf %lf %lf %lf", &c, &m, &l, &e);
    printf("+-------------------+----------+\n");
    printf("|COURSE             |GRADE     |\n");
    printf("+-------------------+----------+\n");
    printf("|C Language         |%10.2f|\n", c);
    printf("+-------------------+----------+\n");
    printf("|Higher Mathematics |%10.2f|\n", m);
    printf("+-------------------+----------+\n");
    printf("|Linear Algebra     |%10.2f|\n", l);
    printf("+-------------------+----------+\n");
    printf("|College English    |%10.2f|\n", e);
    printf("+-------------------+----------+\n");
    return 0;
}
int main1()
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